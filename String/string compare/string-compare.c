#include<stdio.h>
#include<string.h>
#include<conio.h>
main() 
{
	char s[15],d[15];
	int length1,length2,length,i;
	printf("enter first string\t");
	gets(s);
	printf("enter second string\t");
	gets(d);
	printf("\n comparing two strings %s and %s\n",s,d);

	length1=strlen(d);
	length2=strlen(s);
	if(length1>length2)
	{
		length=length1;
	}
	else
	{
		length=length2;
	}
	for(i=0;i<=length;i++)
	{
		if(d[i]<s[i])
		{
			printf("string 1 is lesser than 2st");
			break;
		}
		if(d[i]>s[i])
		{
			printf("string 2 is lesser than 1nd");
			break;
		}
	}
	if(i==length+1)
	printf("strings are equal");
	getch();
}
