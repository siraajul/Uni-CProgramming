#include<stdio.h>
#include<conio.h>
int main()
{
	int a=10;
	float b=20.5;
	char c='a';
     void *ptr=NULL;
     ptr=&a;
    printf(" %d", (*(int*)ptr));
      ptr=&b;
     printf(" %f", (*(float*)ptr));
     ptr=&c;
     printf(" %c", (*(char*)ptr));

	getch();
	return 0;
}
