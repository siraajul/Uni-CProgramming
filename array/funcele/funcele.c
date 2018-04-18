#include<stdio.h>
#include<conio.h>
void ss(int x)
{
		printf("%d\t",x);
}
void main()
{
	int a[10],n,i;
	printf("enter the no of elements of array\t");
	scanf("%d",&n);
	printf("enter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		ss(a[i]);
	}
	getch();
}



