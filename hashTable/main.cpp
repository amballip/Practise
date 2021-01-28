#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;


int random1()
{
	 int a = rand()%90;
	 if(a>=65)
		 return a;
	 else
		 return random1();


}

string generateString()
{
	string s="";                   
	s[0]=random1();
	s[1]=random1();
	s[2]=random1();
	s[3]=random1();

	cout<<"adress of S is "<<(void*)********s<<endl;
	cout<<"adress of S[0] is "<<(void*)&s[0]<<endl;
	return s;

}





int main()
{

	for(int i=0;i<10;i++)
	{
		string s = generateString();
		cout<<s<<endl;
	}


}
