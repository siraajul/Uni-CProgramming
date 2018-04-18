#include<stdio.h>
#include<conio.h>
int swapv(int a,int b);
void main()
{
	int a,b,c;
	printf("enter the values of a and b:-");
	scanf("%d%d",&a,&b);
	swapv(a,b);
	printf("the value of a and b before swapping is:a=%d b=%d\n",a,b);
	getch();
	return 0;
}
int swapv(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("the value of a and b after swapping a=%d b=%d\n",a,b);
}

