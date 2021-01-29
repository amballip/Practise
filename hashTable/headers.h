#pragma once

#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;


void hashGen(string s);
void printHash();
extern int keySize;


struct object
{
	string value;
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

	void add(string s);	
	linked();
		

};







