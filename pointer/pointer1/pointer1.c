// WAP  to add two numbers using through variables and their pointers
#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b,*cd,*gh,s,k;
    printf("\nenter the two numbers");
    scanf("%d%d",&a,&b);
    cd=&a;
    gh=&b;
    s=a+b;
    k=*cd+*gh;
    printf("\n sum of two numbers using variable is %d",s);
    printf("\n sum of two numbers using pointers is %d",k);
    getch();
    return 0;
}
    
     
