#include<stdio.h>
#include<conio.h>
int main()
{
int *iptr = 10;
float *fptr = NULL;
char *cptr = NULL;

printf("\nSize of Integer Pointer   : %d Bytes",sizeof(iptr));
printf("\nSize of Character Pointer : %d Bytes",sizeof(cptr));
printf("\nSize of Float Pointer     : %d Bytes",sizeof(fptr));
getch();

return 0;
}
