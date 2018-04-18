#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10;
	float b=20.5;
	char c='a';
	void *ptr;
	ptr=&a;
	printf("\n%d",(*(int *)ptr));
	ptr=&b;
	printf("\n%f",(*(float *)ptr));
	ptr=&c;
	printf("\n%c",(*(char *)ptr));
	getch();
	return 0;
}
