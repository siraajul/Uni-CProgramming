#include<stdio.h>
#include<conio.h>
int swapr(int*,int*);
int main()
{
	int a=12,b=32;
	swapr(&a,&b);
	printf("\na=%d b=%d",a,b);
	//scanf("%d%d",&a,&b);//
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
