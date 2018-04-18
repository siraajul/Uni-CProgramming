#include<stdio.h>
#include<conio.h>
void main()
{
     FILE *ptr;
     char ch;
     ptr=fopen("K1629.txt","r");
     if(ptr==NULL)
     {
            printf("file not present");
     }
     else
     {            
     	printf("the contents of the file are \n");
     	while(!feof(ptr))
     	{
            ch=fgetc(ptr);
            printf("%c",ch);
        }
    }
    fclose(ptr);
    getch();
}
