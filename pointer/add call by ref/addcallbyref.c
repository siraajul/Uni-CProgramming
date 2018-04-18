#include<stdio.h>
#include<conio.h>
 
int add(int*,int*);		//Function prototyping
 
void main()
{
    int num1, num2, result;
    printf("\nEnter the two number: ");
    scanf("%d %d", &num1, &num2);
    result = add(&num1, &num2);
    printf("\nAddition of %d and %d is %d", num1, num2, result);
    getch();
}
 

int add(int *n1, int *n2)
{
    int res;
    res = *n1 + *n2;
    return res;
}
