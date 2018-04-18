#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5];
	int *ptr=&a[0], i;
	for (i=0;i<5;i++)
	{
		scanf("%d",ptr);
		ptr++;	
	}
	ptr=a;
	for(i=0;i<5;i++)
	{
		printf("%d   ",*ptr);
		ptr++;
	}
	getch();
}
