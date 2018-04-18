#include<stdio.h>
#include<conio.h>
void main()
{
     int a[]={1,2,3,4,5},i;
     int *ptr=a;
     printf("%d\n",*(ptr+2));
     printf("%d\n",*(ptr+1));
     printf("%d\n",*(a+2));
     printf("%d\n",*a);
     for(i=0;i<5;i++)
     printf("%d   ", *(i+a));
     getch();
}
     
