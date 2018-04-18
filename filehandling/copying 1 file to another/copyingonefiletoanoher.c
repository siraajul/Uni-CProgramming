#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	FILE *fp1;
	FILE *fp2;
	fp1=fopen("data.txt","r");
	fp2=fopen("copy2.txt","w");
	while(!feof(fp1))
	//while((ch=fgetc(fp1))!=EOF)//
	{
		ch=fgetc(fp1);
		//printf("%c",ch);//
		fputc(ch,fp2);
	}
	fclose(fp1);
	fclose(fp2);
	printf("file copied");
	getch();
}
