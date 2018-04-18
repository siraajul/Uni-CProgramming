#include<stdio.h>
main() 
{
	char str[15];
	int i=0,length=0;
	printf("enter string \t");
	gets(str);
	while(str[i]!='\0')
	{
		length++;
		i++;
	}
	printf("length of string is %d\t",length);
}
