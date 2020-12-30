#include<iostream>
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
        if(InputNode->left == nullptr && InputNode->value < InsertValue)
        {
            BSTree temp;
            temp.value = InsertValue;
            InputNode->left = &temp;
            return;
        }
        else if(InputNode->value > InsertValue)
        {
            InsertIterate(InputNode->right,InsertValue);
            return;
        }
         if(InputNode->right == nullptr && InputNode->value > InsertValue)
        {
            BSTree temp;
            temp.value = InsertValue;
            InputNode->right = &temp;
            return;
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
            BSTree temp;
            temp.value = InsertValue;
            *root = temp;
        }
        else
        {
            InsertIterate(root,InsertValue);
        }
        
    }

    BSTreeFuction()
    {
        root = nullptr;                                       
    }

    private:

};
int main()
{
    int option;
    BSTreeFuction BST;
    
    do
    {
        cout<<"Enter option to proceed. 0 to exit"<<endl;
        cout<<"1. Insert node"<<endl;
        cin>>option;
        int value;

        switch(option)
        {
            case 0:
            break;

            case 1:
            cout<<"Insert operation"<<endl;
            cout<<"Enter value"<<endl;
            BST.Insert(value);
            break;

            default:
            cout<<"Invalid option";
        }
    } while (option!=0);

    return 0;   
}

