//POINTER TO POINTER
#include<conio.h>
#include<stdio.h>
int main()
{
    int i=3,*j,**k;
    j=&i;
    k=&j;
    printf("\nvalue of i = %d",i);
     printf("\nvalue of address of i = %d",j);
    printf("\nValue of *j =%d",*j);
     printf("\nvalue of address of j = %d",&j);
      printf("\nvalue of address of j = %d",k);
    printf("\nValue of **k =%d",**k);
     printf("\nvalue of address of k = %d",&k);
    getch();
    return 0;
}
//POINTER TO POINTER MEANS THAT A VARIABLE CAN BE DECLARED WHICH CAN STORE THE ADDRESS OF A POINTER VARIABLE
