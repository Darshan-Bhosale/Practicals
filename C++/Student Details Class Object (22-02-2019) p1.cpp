#include<iostream>
#include<conio.h>
using namespace std;
class std_details
{
	public:
	char name[30],course[20],clas[10];
	int age,roll_no,marks;
	float percentage;
	
	void get()
	{
		cout<<"Enter student Name:";
		cin>>name;
		cout<<"Enter student Age:";
		cin>>age;
		cout<<"Enter student Course:";
		cin>>course;
		cout<<"Enter student Roll No.:";
		cin>>roll_no;
		cout<<"Enter student Marks:";
		cin>>marks;
		cout<<"Enter student Class:";
		cin>>clas;
		cout<<"Enter student Percentage:";
		cin>>percentage;
	}
	
	void put()
	{
		cout<<"\nName \tAge \tCourse \tRoll No. \tMarks \tClass \tPercentage";
		cout<<"\n"<<name<< "\t"<<age<< "\t"<<course<< "\t"<<roll_no<< "\t\t"<<marks<< "\t"<<clas<< "\t"<<percentage<<"\n";
	}
};
int main()
{
	class std_details s1,s2,s3;
	s1.get();
	s1.put(); 

	s2.get();
	s2.put();
	
	s3.get();
	s3.put();
}
