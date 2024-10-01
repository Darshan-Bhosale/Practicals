#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *f=fopen("details.txt","a+");
	int id;
	char name[30];
	char phone[23];
	char dob[25];
	printf("Enter The id no.");
	scanf("%d",&id);
	printf("Enter The Name");
	scanf("%s",&name);
	printf("Enter The phone no");
	scanf("%s",&phone);
	printf("Enter The dob");
	scanf("%s",&dob);
	fprintf(f,"Id No.:%d\tName:%s\tPhone No.:%s\tDOB:%s\n",id,name,phone,dob);
	printf("\ndata saved");
	fclose(f);
	
	FILE*f1=fopen("details.txt","r");
	printf("\nEnter The id no:%d",id);
	printf("\nEnter The name:%d",name);
	printf("\nEnter The phone:%d",phone);
	printf("\nEnter The dob:%d",dob);
	fscanf(f,"Id No.:%d\tName:%s\tPhone No.:%s\tDOB:%s\n",&id,name,phone,dob);
	printf("\ndata saved");
	fclose(f1);
	return 0;
}
