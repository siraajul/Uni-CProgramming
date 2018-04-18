#include<conio.h>
#include<stdio.h>
main()
{
	int a=0,b=1,c,n=2;
	printf("%d  %d",a,b);
	while(n<10)
		{
 			c=a+b;
			printf("%d  ",c);
 			a=b;
 			b=c;
 			n++;
 		}
 getch();
}
