#include<stdio.h>
#include<conio.h>
void main()
{
	int *iptr=NULL;
	int *fptr=NULL;
	int *cptr=NULL;
	printf("\n size of integer pointer =%d bytes",sizeof(iptr));
	printf("\n size of character pointer =%d bytes",sizeof(cptr));
	printf("\n size of float pointer =%d bytes",sizeof(fptr));
	getch();
	return 0;
}
