#include<stdio.h>
#include<conio.h>
main()
{
	FILE *fp;
	char name[20];
	printf("enter file name");
	scanf("%s",name);
	fp=fopen(name,"a");
	printf("sucessfull");
	getch();
}
