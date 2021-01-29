#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;


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

	cout<<s<<endl;
	return s;

}


void hashGen(string s)
{

	


}


int main()
{

	for(int i=0;i<100;i++)
	{
		string s = generateString();
		hashGen(s);
	}

}
