#include<iostream>
#include<map>
using namespace std;

class linkedList
{
    public:
    class Node
    {
        public:
        int m_data;
        Node *next;
    
        Node(int data):m_data(data),next(nullptr){}      
    };
    Node *first = nullptr;
    void insertFront();
    void insertRear();

    void deleteFront();
    void deleteRear();
    
    void reverse();

    void findEle(int key);

    void findDup();

    linkedList mergeSortedLL(linkedList& list1, linkedList& list2);

    void loopinLL();

    void display();
    void displayLL(linkedList& l);

};

void linkedList::insertFront()
{
    Node *newNode;
    int data;
    while(1)
    {
        cout<<"enter the data to insert\n"<<endl;
        cin>>data;

        if(data==-1)
            return;

        newNode = new Node(data);

        if(first == nullptr)
            first=newNode;
        else{
            newNode->next=first;
            first = newNode;
        }

    }

}

void linkedList::insertRear()
{
    Node *newNode;
    int data;
    while(1)
    {
        cout<<"enter the data to insert @REAR press -1 to exit\n"<<endl;
        cin>>data;

        if(data == -1)
            return;

        newNode = new Node(data);
        

        if(first == nullptr)
            first=newNode;

        else
        {
            Node *temp = first;
            while(temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            temp =nullptr;
            delete temp;
        }   

    }
    
}

void linkedList::deleteFront()
{
    if(first == nullptr)
        cout<<"delete not possible"<<endl;
    else
    {
        if(first->next == nullptr)
        {
            delete first;
            first = nullptr;
        }
        else
        {
            Node* temp = first;
            first = first->next;
            cout<< "deleted node data is: "<<temp->m_data;
            delete temp;
            //temp = nullptr;
        }

    }
}
void linkedList::deleteRear()
{
    if(first == nullptr)
        cout<<"delete not possible"<<endl;
    else
    {
        if(first->next == nullptr)
        {
            delete first;
            first = nullptr;
        }

        else
        {
            Node* temp = first;
            while( temp->next->next != nullptr)
            {
                temp = temp->next;
            }
            cout << "deleted node data is: "<<temp->next->m_data;
            delete temp->next;
            temp->next =nullptr;
        }
    }
    
}

void linkedList::reverse()
{
    Node* x;Node* y;Node* z;
    x = first;
    y = first->next;
    z = y->next;

    while(z != nullptr)
    {
        y->next = x;
        x = y;
        y = z;
        z = z->next;
    }
    y->next = x;
    first->next = nullptr;
    first = y;
}


void linkedList::findEle(int key)
{
    if(first == nullptr)
        cout<<"LL is empty";
    else if(first->next == nullptr && key != first->m_data)
        cout<<"key not found";
    else
    {
        Node* temp=first;
        int index =0;
        while(temp != nullptr)
        {
            if(key == temp->m_data)
            {
                cout<<"Key found at index :"<<index;
                return;
            }
            temp = temp->next;
            index++;            
        }
    }
    cout<<"key not Found!!";
}

void linkedList::findDup()
{
    if(first == nullptr)
        cout<<"LL is empty";
    else
    {
        map<int,int> m;
        Node* temp=first;
        
        while(temp != nullptr)
        {
            m[temp->m_data]++;
            temp = temp->next;
        }

        for(auto ele:m)
        {
            if(ele.second > 1)
            {
                cout<<"duplicate element is=>"<<ele.first;
                return;
            }
                
        }
        cout<<"No duplicate element found in List";

    }
}

//check this function
linkedList linkedList::mergeSortedLL(linkedList& list1, linkedList& list2)
{
    // 1 5 6 8
    // 2 3 4
    // 1 2 3 5 4 6 8

    if(list1.first == nullptr)
        return list2;

    if(list2.first == nullptr)
        return list1;

    if(list1.first == nullptr && list2.first == nullptr)
        return list1;
    
    Node* temp1 = list1.first;
    Node* prev1 = list1.first;
    Node* temp2 = list2.first;
    Node* prev2 =list2.first;
    while(temp1 != nullptr || temp2 != nullptr)
    {
        if(temp1->m_data <= temp2->m_data)
        {
            prev1->next = temp2;

            temp1 = temp1->next;
            prev1 =temp1;

            temp2 = temp2->next;
            prev2 =temp2;           
        }
        else
        {
            prev2->next = temp1;

            temp2 = temp2->next;
            prev2 =temp2;

            temp1 = temp1->next;
            prev1 =temp1;
        }

    }
    return list1;
}

void linkedList::loopinLL()
{

}


void linkedList::display()
{
    if(first == nullptr)
        cout<<"LL is empty";
    else if (first->next == nullptr)
        cout<<first->m_data;
    else
    {
        Node *temp = first;
        while(temp != nullptr)
        {
            cout<<temp->m_data<<"\t";
            temp = temp->next;                      
        }
    }     
}


void linkedList::displayLL(linkedList& l)
{
    if(l.first == nullptr)
        cout<<"LL is empty";
    else if (l.first->next == nullptr)
        cout<<l.first->m_data;
    else
    {
        Node *temp = l.first;
        while(temp != nullptr)
        {
            cout<<temp->m_data<<"\t";
            temp = temp->next;                      
        }
    }     
}
int main()
{
    linkedList obj;

    
    while(1)
    {

        cout<<"Press:1 =>insert front,2=>Insert Rear, 3=> delete front, 4=> delete Rear, 5=>Reverse,6=>findElemet,7=>findDuplicate 8=>Display ,-1 to EXIT\n";
        int choice;
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                obj.insertFront();
                break;
            }


            case 2:
            {
                obj.insertRear();
                break;
            }
                

            case 3:
            {
                obj.deleteFront();
                cout<<"\n";
                break;
            }
                

            case 4:
            {
                obj.deleteRear();
                cout<<"\n";
                break;
            }

            case 5:
            {
                obj.reverse();
                cout<<"\n";
                break;
            }

            case 6:
            {
                int ele;
                cout<<"Enter element to find in list\n";
                cin>>ele;
                cout<<"\n";
                obj.findEle(ele);
                cout<<"\n";
                break;
            }

            case 7:
            {
                obj.findDup();
                cout<<"\n";
                break;
            } 

            case 8:
            {
                obj.display();
                cout<<"\n";
                break;
            }
            
            case -1:
                return 0;

            default:
            {
                break;
            }
                
        }
    }

    linkedList l1,l2;
    l1.insertRear();
    l2.insertRear();

    linkedList res=l1.mergeSortedLL(l1,l2);
    l1.displayLL(res);
}