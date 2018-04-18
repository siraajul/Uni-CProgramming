#include<stdio.h>
#include<conio.h>

int main()
{
	char str[20];
	FILE *fp;
	fp=fopen("text.txt","w");
	gets(str);
	fputs(str,fp);
	fclose(fp);
	fp=fopen("text.txt","r");
	fgets(str,50,fp);
	printf("%s",str);
	fclose(fp);
	getch();
}
