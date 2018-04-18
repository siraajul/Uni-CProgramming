#include<stdio.h>
#include<conio.h>

int main()
{
	char str[20];
	FILE *fp1,*fp2;
	fp1=fopen("data.txt","r");
	fp2=fopen("ccc.txt","w");
	fgets(str,20,fp1);
	fputs(str,fp2);
	printf("data saved");
	fclose(fp1);
	fclose(fp2);
	getch();
}
