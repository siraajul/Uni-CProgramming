#include<stdio.h>
#include<conio.h>
int main()
{
	int a=10;
	int *p1=&a;
	float b=20.677;
	float *p2=&b;
	char c='a';
	char *p3=&c;
	printf("%d\t %d \t %f \t %c",p1,*p1,*p2,*p3);
	getch();
}
