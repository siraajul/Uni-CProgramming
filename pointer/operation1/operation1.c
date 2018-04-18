#include<stdio.h>
#include<conio.h>

int main()
{
	int num1=20,num2=10,*ptr1,*ptr2,sum,sub,mul,divide;
	ptr1=&num1 ;
	ptr2=&num2 ;
	sum=*ptr1+*ptr2;
	sub=ptr1-ptr2;
	mul=*ptr1 * *ptr2;
	divide=*ptr1 / *ptr2;

	printf("%d \n",sum);
	printf("%d \n",sub);
	printf("%d \n",mul);
	printf("%d \n",divide);
	getch();
	return(0);
}
