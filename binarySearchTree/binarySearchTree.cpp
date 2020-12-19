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
    BSTree* root;

    void Insert(int value)
    {

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



