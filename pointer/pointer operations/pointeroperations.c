//PROGRAM TO SHOW HOW OPERATORS WORK IN CASE OF POINTERS
#include<stdio.h>
#include<conio.h>
int *p1,*p2,*p3,*p4;
int i=10;
int j=2;
int a[5]={10,20,3,40,5};
main()
{
      int m,n,x,y,z;
      p1=&i;
      p2=&j;
      p3=&a[1];
      p4=&a[3];
      m=p4-p3;//subtracting these pointers help to determine how far are they
      printf("\nPointer Subtraction is = %d",m);
      z=*p4-*p2;
       printf("\nPointer Subtraction is = %d",z);
      n=*p1+*p2;
     printf("\n Value of n is = %d",n);
      printf("\nthe value of p1 is = %d",p1);
      printf("\nthe value of p2 is = %d",p2);
      printf("\nthe value of p3 is = %d",p3);
      
      x=*p3+2;
      p3=p3+2;
printf("\n The value of integer add in pointer deref is = %d",x);
 printf("\n The value of integer add in pointer is = %d",p3);
 printf("\n The value of integer add in pointer is = %d",*p3);
 
 
      if(p1>=p2)
      printf("hii");
      if(p1<=p2)
      printf("\nbye");
 
      if(p1==p2)
      printf("hello");
      getch();
      }
