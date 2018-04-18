//to copy one file to another but taking the file name from the user

 #include<stdio.h>
 #include<conio.h>
int main()
{
  FILE *p,*q;
  char file1[20],file2[20];
  char ch;
  printf("\nEnter the source file name to be copied:");
  gets(file1);
  p=fopen(file1,"w");
  while(ch!='.')
  {
  	ch=getche();
	fputc(ch,p) ;
  }
  fclose(p);
  p=fopen(file1,"r");
  if(p==NULL)
  {
      printf("cannot open %s",file1);
  }
  printf("\nEnter the destination file name:");
  gets(file2);
  q=fopen(file2,"w");
  if(q==NULL)
  {
      printf("cannot open %s",file2);
  }
  while((ch=fgetc(p))!=EOF)
  fputc(ch,q);
  printf("\nCOMPLETED");
  fclose(p);
  fclose(q);
 getch();
}


