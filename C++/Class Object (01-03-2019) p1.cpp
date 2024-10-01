//1.write a program to calculate the area of circle using class & object
#include<iostream>
#include<conio.h>
using namespace std;
class Circle
{
	float pi=3.14,r;
	int a;
	public:
		void get_area()
		{
			cout<<"Entr the Radius of Circle";
			cin>>r;
		}
		void show_area()
		{
			a=pi*r*r;
			cout<<"Area of circle is"<<a;
		}
};
int main()
{
	Circle a;
	a.get_area();
	a.show_area();
}

