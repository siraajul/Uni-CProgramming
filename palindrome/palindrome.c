#include<conio.h>
#include<stdio.h>
main()
{
 int a,rev=0,n,temp;
 printf("Enter the value of a number:  ");
 scanf("%d",&n);
 temp=n;
 while(n!=0)
 {
   a=n%10;
   n=n/10;
   rev=rev*10+a;
 }
 printf("Reverse Number is: %d\n",rev);
 if(rev==temp)
 {
              printf("no is palindrome");
}
else
{
    printf("no is not palindrome");
}
 getch();
 }
