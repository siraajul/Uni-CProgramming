#include<stdio.h>
#include<conio.h>
int main()
{
	int a=5;
	int *ptr=&a;
	printf("1)%d\n",a);
	printf("2)%d\n",&a);
	printf("3)%d\n",ptr);
	printf("4)%d\n",*(&a));
	printf("5)%d\n",*ptr);
	printf("6)%d\n",&ptr);
	getch();
}
