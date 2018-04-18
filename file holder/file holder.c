#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	FILE *ptr;
	ptr=fopen("abhi.txt","w");
	printf("enter text and press . to end\n");
	while(ch!='.')
	{
		ch=getche();
		fputc(ch,ptr);
	}
	printf("record saved");
	fclose(ptr);
	getch();
	return 0;
}
