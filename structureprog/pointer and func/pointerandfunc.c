#include<stdio.h>
#include<conio.h>
struct student
{
	int roll;
	char name[10];
	float per;
};
void display(int,char [],float);
void main()
{
	struct student s;
	printf("enter rollno\n");
	scanf("%d%f%s",&s.roll,&s.per,s.name);
	display(s.roll,s.name,s.per);
	getch();
}
void display(int a,char b[],float c)
{
	printf("%d\n%f\n",a,c);
	printf("%s",b);
}
