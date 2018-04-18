#include<stdio.h>
#include<conio.h>
void increment();
void main()
{
	increment();
	increment();
	increment();
     getch();
}
void increment()
{
  static int i=1;
	printf("%d\n",i);
	i++;
}

