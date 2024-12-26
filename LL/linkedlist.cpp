#include<iostream>
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

    void findEle();

    void findDup();

    void mergeSortedLL();

    void loopinLL();

    void display();

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



void linkedList::display()
{
    Node *temp = first;
    while(temp != nullptr)
    {
        cout<<temp->m_data<<"\t";
        temp = temp->next;
        
    }

}

int main()
{
    linkedList obj;
    obj.insertFront();
    obj.insertRear();
    obj.display();
}