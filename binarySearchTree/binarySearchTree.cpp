#include<iostream>
#include<fstream>
using namespace std;

struct BSTree
{
    int value;
    BSTree* right;
    BSTree* left;

    BSTree() 
    {                                                                      
        right = nullptr;
        left= nullptr;
    }
};


class BSTreeFuction
{
    public:
    BSTree* root = new BSTree();

    void InsertIterate(BSTree* InputNode,int InsertValue)
    {
        if(InputNode->left == nullptr && InsertValue < InputNode->value )
        {
           if(InputNode->value == InsertValue)
            {
                cout<<"Value is repeated"<<endl;
                return;
            }
            else
            {
                BSTree* temp = new BSTree() ;
                temp->value = InsertValue;
                InputNode->left = temp;
                cout<<"Node created"<<endl;
                return;
            }
            
             
        }
        else if(InputNode->value > InsertValue)
        {
            InsertIterate(InputNode->right,InsertValue);
            return;
        }
         if(InputNode->right == nullptr && InsertValue > InputNode->value )
        {
            if(InputNode->value == InsertValue)
            {
                cout<<"Value is repeated"<<endl;
                return;
            }
            else
            {
                BSTree* temp = new BSTree();
                temp->value = InsertValue;
                InputNode->right = temp;
                cout<<"Node created"<<endl;
                return;
            }
            
            
        }
        else if(InputNode->value < InsertValue)
        {
            InsertIterate(InputNode->left,InsertValue);
            return;
        }
    }

    void Insert(int InsertValue)
    {
        if(root == nullptr )
        {
            BSTree* temp = new BSTree();
            temp->value = InsertValue;
            root = temp;
            cout<<"Root node created"<<endl;    
            return;
        }
        else
        {
            if(root->value== InsertValue)
            {
                cout<<"Value is repeated"<<endl;
                return;
            }
            else
            {
                InsertIterate(root,InsertValue);
            }
            
            
        }
        
    }

    void PrintTree()
    {

    }

    BSTreeFuction()
    {
        root = nullptr;                                       
    }

    private:

};
int main(int argc, char* argv[])
{
    
    BSTreeFuction BST;


    ifstream fileOpen;
    fileOpen.open(argv[1]);

    int* a = new int[10];
    for(int i = 0;i<10;i++)
    {
        fileOpen>>a[i];
        cout<<a[i]<<endl;
    }

    for(int i = 0;i<10;i++)
    {
        BST.Insert(a[i]);
    }

/*
    
    int option;
    do
    {
        cout<<"Enter option to proceed. 0 to exit"<<endl;
        cout<<"1. Insert node"<<endl;
        cout<<"2. Print Tree"<<endl<<endl;

        cin>>option;
        int value;

        switch(option)
        {
            case 0:
            break;

            case 1:
            cout<<endl;
            cout<<"Insert operation"<<endl;
            cout<<"Enter value"<<endl;
            cin>>value;
            BST.Insert(value);
            break;

            case 2:
            BST.PrintTree();
            break;

            default:
            cout<<"Invalid option";
        }
    } while (option!=0);
    
*/
    return 0;   
}

