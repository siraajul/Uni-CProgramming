#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5];
	int *ptr=&a[0], i;
	for (i=0;i<5;i++)
	{
		scanf("%d",(ptr+i));	
	}
	for(i=0;i<5;i++)
	{
		printf("%d   ",*(ptr+i));	
	}
	getch();
}
