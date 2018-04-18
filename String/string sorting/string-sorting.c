#include<string.h>
#include<stdio.h>
#include<conio.h>
main()
{
	char s[10][10],temp[10];
	int i,j;
	printf("enter five  strings\n");
	for(i=0;i<=4;i++)
	{
		gets(s[i]);
	}
	for(i=1;i<5;i++)
	{
		for(j=0;j<5-1;j++)
		{
			if(strcmp(s[j],s[j+1])>0)
			{
				strcpy(temp,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],temp);
			}
		}
	}
	printf("strings sorted in alphabetical order are\n");
	for(i=0;i<5;i++)
	{
		puts(s[i]);
	}
	getch();
}
