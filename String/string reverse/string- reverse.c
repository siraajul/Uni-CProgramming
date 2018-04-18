#include<stdio.h>
#include<string.h>
#include<conio.h>
main() 
{
	char str1[10],str2[10];
	int len,i;
	printf("enter first string\t");
	gets(str1);
	len=strlen(str1);
	int j=0;
	for(i=len-1;i>=0;i--)
	{
		str2[j]=str1[i];
		j++;
	}
	str2[j]='\0';
	puts("reverse is\n");
	puts(str2);
	getch();
}
