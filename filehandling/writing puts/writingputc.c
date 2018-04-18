#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	FILE *ptr;
	ptr=fopen("K1629.txt","w");
	printf("enter text and press . to end");
	while(ch!='.')
	{
		//scanf("%c",&ch);
		ch=getche();
		fputc(ch,ptr);
	}
	printf("record saved");
	fclose(ptr);
	getch();
}
