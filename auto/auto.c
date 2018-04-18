#include<stdio.h>
#include<conio.h>
void main()
{
	auto int i=4;
	
	printf("%d\n",i);
	{
		auto int i=7;
		printf("%d\n",i);
	}
	{ 
	    auto int i=8;
        printf("%d",i);
    }
   getch();
}
