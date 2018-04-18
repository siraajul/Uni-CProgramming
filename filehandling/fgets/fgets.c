#include<stdio.h>
#include<conio.h>
int main()
{
	char str[50],str2[50];
	FILE *fp;
	gets(str);
	fp=fopen("data.txt","w");
	fputs(str,fp);
	printf("data written  ");
	fclose(fp);
	fp=fopen("data.txt","r");
	fgets(str2,50,fp);
	puts(str2);
	getch();

}
