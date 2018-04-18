#include<stdio.h>
#include<conio.h>
main()
{
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("K15071.txt","w");
	while(ch!='.')
	{
		ch=getche();
		fputc(ch,fp1);
	}
	fclose(fp1);
	fp1=fopen("K15071.txt","r");
	fp2=fopen("15071.txt","w");
	while(!feof(fp1))
	{
		ch=fgetc(fp1);
		if(ch==','||ch=='.')
		continue;
		else
		{
			fputc(ch,fp2);
			//fputc(' ',fp2);//
		}
	}
	fclose(fp1);
	fclose(fp2);
	printf("copied");
	getch();
}
