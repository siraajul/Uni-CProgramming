// A POINTER INCREMENT
#include<conio.h>
#include<stdio.h>
main()
{
int i=5, *ptr, a[4]={1,2,3,4},*ptr1;
ptr1=&a[0];
ptr=&i;
printf("\n%d",ptr);
printf("\n%d",&ptr);
printf("\n  %d",ptr);
printf("\n");
printf("\n%d",*ptr);
printf("\n%d",++(*ptr));
printf("\n%d",(*ptr)++);
printf("\n%d",*ptr);
//For Array
printf("\n    %d",*ptr1);
ptr1++;
printf("\n    %d",*ptr1);
ptr1=ptr1+2;
printf("\n    %d",*ptr1);
ptr1--;
printf("\n    %d",*ptr1);
getch();
}
