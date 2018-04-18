#include<stdio.h>
#include<conio.h>
int swapr(int*,int*);
int main()
{
	int a,b;
	printf("enter any two numbers");
	scanf("%d",&a);
	printf("enter 2nd no :");
	scanf("%d",&b);
	printf("the entered values are %d %d\n",a,b);
	swapr(&a,&b);
	getch();
	return 0;
}
int swapr(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	printf("%d %d",*x,*y);
}
