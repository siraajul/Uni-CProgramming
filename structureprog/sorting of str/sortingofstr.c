#include<stdio.h>
#include<conio.h>
struct book
{
	char name[15] ;
	float price;
	int pages ;
}b1[2] ;
int main()
{
	int i,j;
	struct book num;
	for(i=0;i<2;i++)
	{
		printf("\nEnter name, price & no. of pages of book\n");
		scanf("%s %f %d",b1[i].name,&b1[i].price,&b1[i].pages);
	}
	for (i=1;i<2;i++)
	{
		for(j=0;j<1;j++)
		{
			if(b1[j].price>b1[j+1].price)
			{
				num=b1[j];
				b1[j]=b1[j+1];
				b1[j+1]= num;
			}
		}
	}
	for(i=0;i<2;i++)
	{
		printf("\nAnd this is what you entered");
		printf("\nThe name, price & no. of pages of  book\n\n");
		printf("%s \t %.2f \t %d",b1[i].name,b1[i].price,b1[i].pages);
	}
	getch();
}
