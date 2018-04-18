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
		if(str1[i]>='A' && str1[i]<='Z')	
			str1[i]=str1[i]+32;
	}
	puts("string in lower is\n");
	puts(str1);
	getch();
}
