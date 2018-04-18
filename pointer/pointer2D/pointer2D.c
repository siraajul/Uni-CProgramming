#include<conio.h>
#include <stdio.h>

void main()
{
   int p[3][2];
   int i,j;

  for(i=0;i<=2;i++)
  {
	for(j=0;j<=1;j++)
	{
		scanf("%d",*(p+i)+j);
	}
  }
  for(i=0;i<=2;i++)
  {
	for(j=0;j<=1;j++)
	{
		printf("%d\t%u\n",*(*(p+i)+j),*(p+i)+j);
	}
  }
   getch();
}
