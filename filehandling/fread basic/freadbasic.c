#include<stdio.h>
#include<conio.h>

struct student
{
   char name[30];
   int r;
}s[20];
  
int main()
{ 
          FILE *fp;
          int n,i;
          printf("\nEnter Total No. of students\t");
          scanf("%d",&n);
          
          fp=fopen("astruct.txt","w");
          for(i=1;i<=n;i++)
          {
		  	printf("enter name and rollno\n");
          	scanf("%s%d",s[i].name,&s[i].r);
          }
          fwrite(&s, sizeof(s),1,fp);
          fclose(fp);
         
          fp=fopen("astruct.txt","r");
          printf("\nData in file is: \n");
          fread(&s,sizeof(s),1,fp);
          for(i=1;i<=n;i++)
          {
          	printf("\n%s",s[i].name);
          	printf("\t%d",s[i].r);
          } 
    
          fclose(fp);
          getch();          
}          
