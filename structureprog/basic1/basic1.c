#include<stdio.h>
#include<conio.h>
struct book1
{
    char book[28];
	float price;
	int pages;
};//b1;
int main()
 {
 	struct book1 b1;
 	printf("The size of structure elements\n");
 	printf("Book : %d\n", sizeof(b1.book));
 	printf("price : %d\n", sizeof(b1.price));
 	printf("pages : %d\n", sizeof(b1.pages));
 	printf("Total Bytes : %d",sizeof(b1));
	getch();
	return 0; 	
 }
