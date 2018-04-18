#include<stdio.h>
#include<conio.h>
void main()
{
     int a=6;
  	int *ptr=&a;
  	printf("%d   ",a);
  	printf("%d   ",ptr);
  	printf("%d   ",*ptr);
  	printf("%d   ",*(&a));
  	printf("%d   ",&a);
  	printf("%d   ",&ptr);
  	getch();
}
