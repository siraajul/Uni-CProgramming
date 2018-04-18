#include<stdio.h>
#include<conio.h>
int main()
{
 char name[] = "ankita";
	char *ptr;
	int count=0;
	ptr=name;
  
  while(*(ptr)!='\0')
{
 count++;
ptr++;
}
printf("length of string is =%d ",count);
getch();
}




