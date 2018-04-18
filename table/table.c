#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1;
	printf("enter any number");
	scanf("%d",&n);
	printf("muntiplication of table %d\n",n);
	while(i<=10)
	{
		printf("%d * %d=%d\n",n,i,n*i);
		i++;
	}
	getch();
}

