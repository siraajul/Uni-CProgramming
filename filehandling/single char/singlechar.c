#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	FILE *ptr;
	ptr=fopen("text2.txt","w");
	printf("enter text and press . to end");
	while(ch!='.')
	{
		//scanf("%c",&ch);
		ch=getche();
		fputc(ch,ptr);
	}
	printf("record saved\n");
	fclose(ptr);

	//opening a file
	ptr=fopen("text2.txt","r");
     printf("the contents of the file are \n");
     while(ch!=EOF)
     {
        ch=fgetc(ptr);
        printf("%c",ch);
     }
	 fclose(ptr);
     getch();
}
