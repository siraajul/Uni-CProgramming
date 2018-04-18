#include<stdio.h>
#include<conio.h>
extern int i=9;
void increment();
void main()
{ 
	int i=100;
    printf("%d\n",i);
       increment();
	printf("%d\n",i);
	 increment();
	 printf("%d  ",i);
	 
	getch();
}

void increment()
{
 
	printf("%d\n",i);
	i++;
}

