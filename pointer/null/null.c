#include <stdio.h>
#include<conio.h>
int main()
{
	int a=7,b=8;
   int   *const ptr=&a;
   printf("The value of ptr is %d\n",*ptr);
   //ptr=&b;
   *ptr=30;
   printf("The value of ptr is %d",*ptr);
getch();
   return 0;
}
