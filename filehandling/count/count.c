#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *ptr;
	char ch;
	int count=0;
	ptr=fopen("K1631.txt","w");
	if(ptr==NULL)
	{
		printf("file doesnot exist");		
	}
	else
	{
        printf("enter data");
     	while(ch!='.')
     	{
     		ch=getche();
     		fputc(ch,ptr);
     	}
  	}
	 fclose(ptr);
	 ptr=fopen("K1631.txt","r");
	 printf("\nfile saved sucessfully and contents of file are");
	 
	while((ch=getc(ptr))!=EOF)
	 //while(ch!=EOF)
	 {
	  /*ch=getc(ptr);
	   if(ch==EOF)
	   break;*/
      
	  printf(" %c",ch);	
	  count++;
      }
      
      printf("\n %d",count=count-1);
	 fclose(ptr);
	 
	getch();
	return 0;
	
}

