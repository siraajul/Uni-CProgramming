#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
	char str1[10];
	int i,len;
	printf("Enter any string \t");
	gets(str1);
	len=strlen(str1);
	for(i=0;i<len;i++)
	{
		if(str1[i]>='a' && str1[i]<='z')
		str1[i]=str1[i]-32;
	}
	puts("string in upper is\n");
	puts(str1);
	getch();
}
