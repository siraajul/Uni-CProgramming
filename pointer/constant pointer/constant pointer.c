#include<stdio.h>
#include<conio.h>
void main()
{
	int a=7,b=8;
	int *const ptr=&a;
	printf("the value of ptr is %d\n",*ptr);
	getch();
}
