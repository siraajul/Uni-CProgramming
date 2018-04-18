#include<stdio.h>
#include<conio.h>
void main()
{
     
     int arr[10],i;
     printf("enter the elements in array");
     for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("  %d    ",arr);
    }
     getch();
}
