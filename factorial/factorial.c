#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,f=1,n;
	printf("enter the value of n");
	scanf("%d",&n);
	while(i<=n)
	{
		f=f*i;
		i++;
	}
		printf("factorial of %d is %d",n,f);
		getch();
}

