#include<stdio.h>
#include<conio.h>
void ss(int x[],int n)
{
  int i;
  for (i=0;i<n;i++)
	{        
     ++x[i];
	 printf("%d\t",x[i]);
	}
	printf("\n");
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
	ss(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	getch();
}



