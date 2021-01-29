#include "headers.h"
linked* l = new linked[keySize];


int hashKey(string s)
{
	int key=0;
	for(int i =0;i<s.length();i++)
		key=key+(int)s[i];

	key =key % keySize;
	

	return key;
	

}


void hashGen(string s)
{

	int key = hashKey(s);
	l[key].add(s);
}

void printHash()
{
	for (int i =0;i<keySize;i++)
	{
		object* o1 = l[i].head;
		if(o1 ==nullptr)
		{
			cout<<"No elements in the row"<<endl;
		}
		else
		{
			while(o1->next!=nullptr)
			{
				cout<<o1->value<<" ";
				o1=o1->next;

			}
			
		}
		cout<<endl;

	}
}
