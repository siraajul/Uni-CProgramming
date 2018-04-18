#include<stdio.h>
#include<conio.h>

struct book
{
	char name[15] ;
	float price ;
	int pages ;
};

int main()
{
	struct book b1;
	printf("\nEnter name, price & no. of pages of 1st book\n");
	scanf("%s %f %d",b1.name,&b1.price,&b1.pages);
	printf("\nAnd this is what you entered");
	printf("\nThe name, price & no. of pages of 1st book\n\n");
	printf("%s \t %.2f \t %d",b1.name,b1.price,b1.pages);
	getch();
}
