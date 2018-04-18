#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char a[20],b[20];
	int i,j,len;
	printf("enter 1st string=");
	gets(a);
	printf("enter 2nd string=");
	gets(b);
	len=strlen(a);
	for(i=len,j=0;b[j]!='\0';i++,j++)
	{
		a[i]=b[j];
	}
	a[i]='\0';
	printf("after concatenation=");
	puts(a);
	getch();
}
