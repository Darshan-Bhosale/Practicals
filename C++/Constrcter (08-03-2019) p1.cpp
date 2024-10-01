#include<iostream>
#include<conio.h>
using namespace std;
class abc
{
	public:
	int a,b,c;
	abc()
	{
		cout<<"Default Constructor\n";
	}
	abc(int a,int b)
	{
		cout<<"parameterized Consturctor Example\n";
		cout<<"Value Passed by Object\n"<<a<<"\n"<<b;
	}
	abc(int a,float b, char c)
	{
		cout<<"\nParameterized constructor\n";
		cout<<"Passed value\n"<<a<<"\n"<<b<<"\n"<<c;
		
	}
};
int main()
{
	abc ob1,ob2;
	abc ob3(45,65);
	abc ob4(14,15,'M');
}
