#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	FILE *ptr;
	ptr=fopen("text1.txt","w");
	fputc('v',ptr);

	printf("record saved");
	getch();
}
