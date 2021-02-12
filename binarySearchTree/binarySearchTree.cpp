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
	value= 0;
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
        else if(InsertValue < InputNode->value )
        {
            InsertIterate(InputNode->left, InsertValue);
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
        else if(InsertValue > InputNode->value )
        {
            InsertIterate(InputNode->right, InsertValue);
            return;
        }
    }

    void Insert(int InsertValue)
    {
        if(root == 0 )
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

	ofstream myfile;
	myfile.open(argv[1]);

	for(int i =0;i<20;i++)
	{
		myfile<<rand();
		myfile<<" ";
		
	}

	myfile.close();


    ifstream fileOpen;
    fileOpen.open(argv[1]);

    int* a = new int[20];
 
    for(int i =0;i<20;i++)
	{

		fileOpen>>a[i];
        	cout<<a[i]<<endl;
	}



    for(int i = 0;i<20;i++)
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

