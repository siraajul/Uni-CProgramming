#include<stdio.h>
#include<conio.h>
void main()
{
	register int i=4;
	
	printf("%d\n",i);
	{
		register int i=7;
		printf("%d",i);
	}


	getch();
}
