#include<stdio.h>
#include<conio.h>
struct student
{
	int rollno;
	char name[10];
	int regno;
}s1[3];
void main()
{
	int i;
	for(i=1;i<=2;i++)
	{
		printf("enter rollno of %d student :-",i);
		scanf("%d",&s1[i].rollno);
		printf("enter regno of %d student :-",i);
		scanf("%d",&s1[i].regno);
		printf("enter name of %d student :-",i);
		fflush(stdin);
		gets(s1[i].name);
	}
	for(i=0;i<=1;i++)
	{
		printf("rollno of %d student is\t",i);
		printf("%d\n",s1[i].rollno);
		printf("regno of %d student is\t",i);
		printf("%d\n",s1[i].regno);
		printf("name of %d student is\t",i);
		puts(s1[i].name);
}
getch();
}
