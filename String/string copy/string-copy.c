#include<stdio.h>
#include<string.h>
main() 
{
	char s[15],d[15];
	int i=0,length=0;
	printf("enter first string \t");
	gets(s);
	length=strlen(s);
	for(i=0;i<=length;i++)
	{
		d[i]=s[i];
	}
	d[i]='\0';
	printf("\ncopied string is %s\n",d);
}

