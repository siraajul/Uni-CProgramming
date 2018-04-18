#include<conio.h>
#include<stdio.h>
main()
{
 int a,rev=0,n;


 printf("Enter the value of a number:");
 scanf("%d",&n);
 while(n!=0)
 {
   a=n%10;
   n=n/10;
   rev=rev*10+a;
 }
 printf("Reverse Number is: %d",rev);
 getch();
 }
