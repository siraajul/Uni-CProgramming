#include <stdio.h>
#include<conio.h>


struct job
{ 
   char name[32];
   float salary;
   
}u;
union job1
{ 
   char name[32];
   float salary;
   
}u1;

int main()
{
	printf("size of structure is %d\n",sizeof(u));
	printf("size of unioun is %d",sizeof(u1));
	getch();
	return 0;
}
