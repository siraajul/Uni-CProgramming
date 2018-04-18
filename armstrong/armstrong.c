#include<conio.h>
#include<stdio.h>
void main()
{
 int a,sum=0,n,temp;
 printf("Enter the value of a number:");
 scanf("%d",&n);
 temp=n;
 while(n!=0)
 {
   a=n%10;
   n=n/10;
   sum=sum+(a*a*a);
 }
 printf("the sum=%d\n",sum);
 if(temp==sum)
 {
     printf("number is armstrong no");
 }
 else
 {
     printf("number is not armstrong no");
 }
 getch();
 }
