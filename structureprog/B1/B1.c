#include<stdio.h>
#include<conio.h>

struct student
{
	int roll;
	char name[10];
};
void main()
{
	struct student s={1,"ram"};
	printf("%d\n",s.roll);
	printf("%s\n",s.name);
	struct student s1={2,"sham"};
	printf("%d\n",s1.roll);
	printf("%s",s1.name);
	getch();
}

