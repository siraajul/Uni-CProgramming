#include<stdio.h>
#include<conio.h>
void main()
{
  int a[3][3],b[3][3],c[3][3],i,j;
  
  printf("Enter the First matrix->");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
           scanf("%d",&a[i][j]);
      }
  }
  printf("\nEnter the Second matrix->");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
           scanf("%d",&b[i][j]);
      }
  }
  printf("\nThe First matrix is\n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",a[i][j]);
  }
  printf("\nThe Second matrix is\n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
      printf("%d\t",b[i][j]);
   }
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
            c[i][j]=a[i][j]+b[i][j];
   }
   printf("\nThe Addition of two matrix is\n");
   for(i=0;i<3;i++)
   {
       printf("\n");
       for(j=0;j<3;j++)
            printf("%d\t",c[i][j]);
   }
   


	getch();
}
	

