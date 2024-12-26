#include <iostream>
using namespace std;
//check
class BST
{
public:
    class Node
    {
    public:
        Node* left;
        int data;
        Node* right;

        Node(int data):data(data),left(nullptr),right(nullptr)
        {

        }
    };

    Node* root=nullptr;

    void insertBST(Node* root, int data)
    {
        Node *newNode;  
        while(1)
        {

             if(root == nullptr)
            {
                newNode = new Node(data);
                root = newNode;
            }


            cout <<"enter data to insert ENTER -1 TO EXIT"<<endl;
            cin >> data;
            if(data == -1)
                return;
           
            else
            {
                if(data < root->data)
                {
                    newNode = new Node(data);
                    insertBST(root->left, data);
                }
                else if(data > root->data)
                {
                    newNode = new Node(data);
                    insertBST(root->right, data);
                }

            }
                

        }

    }

    void displayBST(Node* root) {
    if (root == nullptr) {
        return; 
    }


    displayBST(root->left);


    std::cout << root->data << " ";


    displayBST(root->right);
}
};


int main()
{
     BST bst;
     int data =10; 
     bst.insertBST(bst.root,data);
     bst.displayBST(bst.root);

}