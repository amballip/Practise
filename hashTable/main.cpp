#include "headers.h"


int keySize=10;

int random1() //Generates random numbers between 65 and 90
{
	return rand()%(90-65)+65;

}

std::string generateString() // Genetates random string of capital characters.
{
	std::string s="";
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
		std::string s = generateString();
		hashGen(s);
	}

	std::cout<<"Random strings genetated and stored in hash table"<<std::endl;
	
	std::cout<<std::endl;

	printHash();



}
