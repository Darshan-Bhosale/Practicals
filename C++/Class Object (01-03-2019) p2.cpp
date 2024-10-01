#include <iostream>
#include<conio.h>
using namespace std;
class student
{
   		char  name[30];
        int   rollNo;
        int   total;
        float perc;
    public:
        void getDetails(void)
        { 
		cout<<"Enter name: ";
    	cin>>name;
    	cout<<"Enter roll number: ";
    	cin>>rollNo;
    	cout<<"Enter total marks outof 500: ";
    	cin>>total;
     	perc=(float)total/500*100;
		}
		void putDetails(void)
		{
		cout<<"Student details:\n";
    	cout<<"Name:"<<name<<",Roll Number:"<<rollNo<<",Total:"<<total<<",Percentage:"<<perc;
		}
};

int main()
{
       
    int n;
    cout<<"Enter total number of students: ";
    cin>>n;
    
     
    cout << endl;
    for(loop=0;loop< n; loop++){
        cout << "Details of student " << (loop+1) << ":\n";
        std[loop].putDetails();
    }
}
