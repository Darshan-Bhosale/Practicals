#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *f=fopen("Hello.txt","w");
	if(f==NULL)
	printf("File doesn't exist");
	else
	fprintf(f,"hello world");
	printf("data saved");
	fclose(f);
	return 0;
}
