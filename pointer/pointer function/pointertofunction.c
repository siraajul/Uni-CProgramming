#include<stdio.h>
#include<conio.h>
void fun(int *);
void main()
{
	int *p,a=5;
	p=&a;
	printf("%d\n",*p);
	fun(p);
	printf("%d\n",*p);
	getch();
}
void fun(int *q)
{
	*q=9;
	printf("%d\n",*q);
}
