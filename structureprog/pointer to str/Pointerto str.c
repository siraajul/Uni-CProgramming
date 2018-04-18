#include<stdio.h>
#include<conio.h>
struct student
{
int roll;
char name[10];
float per;
};
void main()
{
	struct student s,*p;
	p=&s;
	printf("enter rollno,per,name\n");
	scanf("%d%f%s",&s.roll,&s.per,s.name);
	printf("using pointer to structure....\n");
	printf("%d\n%f\n%s\n",p->roll,p->per,p->name);
	printf("%s\n%d\n%f",(*p).name,(*p).roll,(*p).per);
	printf("\nusing dot operator....\n");
	printf("%s\n%d\n%f",s.name,s.roll,s.per);
	getch();
}
