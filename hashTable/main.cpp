#include "headers.h"

using namespace std;

int keySize=10;

int random1() //Generates random numbers between 65 and 90
{
	return rand()%(90-65)+65;

}

string generateString() // Genetates random string of capital characters.
{
	string s="";
	s.reserve(5);	
	s.push_back(random1());
	s.push_back(random1());
	s.push_back(random1());
	s.push_back(random1());
	return s;

}




int main()
{
	srand(unsigned(time(0)));
	for(int i=0;i<100;i++)
	{
		string s = generateString();
		hashGen(s);
	}

	cout<<"Random strings genetated and stored in hash table"<<endl;
	
	cout<<endl;

	printHash();



}
