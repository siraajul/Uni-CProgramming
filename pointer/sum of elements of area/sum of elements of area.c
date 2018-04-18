#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int *ptr=&a[0];
	int i,sum=0,sumsq=0,sumc=0;
	for(i=0;i<5;i++)
	{
		sum=sum+*(ptr+i);
		sumsq=sumsq+(pow(*(ptr+i),2));
		sumc=sumc+(pow(*(ptr+i),3));
	}
	printf("the sum is %d\n the sumsq is %d\n the sumc is %d",sum,sumsq,sumc);
	getch();
}
