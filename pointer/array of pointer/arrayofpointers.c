#include<conio.h>
#include <stdio.h>

int main()
{
   int *p[3],a[3];
   int i,j;
  for(i=0;i<=2;i++)
  {
    p[i]=&a[i];
  }
  for(i=0;i<=2;i++)
  {
   scanf("%d",p[i]);
  }
  for(i=0;i<=2;i++)
  {
		printf("%d\t%u\n",*(p[i]),p[i]);
  }
   getch();
}
