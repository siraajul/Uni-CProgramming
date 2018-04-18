#include<stdio.h>
#include<conio.h>
void main()
{
	int i=5;
	int *ptr=&i;
	printf("\n%d",ptr);
	printf("\n%d",&ptr);
	ptr++;
	printf("\n%d",ptr);
	printf("\n");
	printf("\n%d",*ptr);
	printf("\n%d",++(*ptr));
	printf("\n%d",(*ptr)++);
	printf("\n%d",(*ptr));
	getch();
}
