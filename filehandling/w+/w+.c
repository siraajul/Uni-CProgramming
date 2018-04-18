//reading and writing into a file
#include <stdio.h>
#include <conio.h>
int main()
{
     FILE *fp;
     char c;
     fp=fopen("data1.text","w+");
     if(fp==NULL)
     {
     	printf("file can not be opened");
     }
     else
     {
     	while(c!='?')
     	{             
            c=getche();
            fputc(c,fp);
        }
    }
    rewind(fp);
    //fclose(fp);     /* close the file before ending program */
	printf("content of the file \n");
	//fp=fopen("data1.text","r");
	while(c!=EOF)
	{
		c=fgetc(fp);
		printf("%c",c);
	}
	fclose(fp);
	getch();
	return 0;
}
