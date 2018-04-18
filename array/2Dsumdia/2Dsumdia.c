#include<conio.h>
#include<stdio.h>
main()
{
int a[5][5],i,j,sum=0;

printf("Enter elements");
for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
    {
    scanf("%d",&a[i][j]);
   }
 }
 
 printf("\nElements are:\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   printf("%d  ",a[i][j]);
  printf("\n");
 }
 printf("\nsum of diagonal elements are:");
 for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
     {
      if(i==j)
       sum=sum+a[i][j];
     }
 }
 printf("\n%d",sum);
getch();
}
