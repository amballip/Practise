#pragma once

#include<iostream>
#include<string>
#include<cstdlib>



void hashGen(std::string s);
void printHash();
extern int keySize;


struct object
{
	std::string value;
	object* next;

	object()
	{
		next = nullptr;
	}
};

class linked
{ 



	public:
		
	object* head;

	void add(std::string s);	
	linked();
		

};







