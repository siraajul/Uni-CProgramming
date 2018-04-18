#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[10];
	int regno;
	struct address
	{
		int hno;
		char city[10];
	}a;
}s1;

void main()
{   
	printf("enter rollno of student");
	scanf("%d",&s1.rollno);
	printf("\nenter regno of student");
	scanf("%d",&s1.regno);
	printf("\nenter name of student");
	fflush(stdin);
	gets(s1.name);
	printf("\nenter address of student");
	printf("\nenter house no");
	scanf("%d",&s1.a.hno);
	printf("enter city");
	fflush(stdin);
	gets(s1.a.city);
	printf("rollno is %d\n",s1.rollno);
	printf("regno is %d\n",s1.regno);
	printf("name is %s\n",s1.name);
	printf("adress is- house no is %d\tcity is %s",s1.a.hno,s1.a.city);
	getch();
}
