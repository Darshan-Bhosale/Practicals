#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	public:   //access specifier
		int id;
		string name;
	student()
	{
		cout<<"Contructor called\n";
	}
	~student()
	{
		cout<<"Detructor Called\n";
	}		
};
int main()
{
	student s1,s2;//s1 is object
	s1.id=123645;  //accessing members of student class
	s1.name="DARSHAN";
	cout<<s1.id<<"\n"<<s1.name<<"\n";
	return 0;
}
