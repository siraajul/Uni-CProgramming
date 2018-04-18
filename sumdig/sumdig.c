#include<stdio.h>
#include<conio.h>
void main()
{
     int no,sum=0,n;
     printf("enter the no");
     scanf("%d",&no);
     while(no>0)
     {
                n=no%10;
                no=no/10;
                sum=sum+n;
    }
     printf("the sum of digits=%d",sum);
     getch();
     }
