#include<stdio.h>
#include<conio.h>
#include<string.h>

struct car
{
	char name[6];
	float price;
	int seats;
}mycar;
int main()
{
 	printf("Enter details\n");
 	printf("enter carname  carprice  carseats\n");
 	scanf("%s%f%d",mycar.name,&mycar.price,&mycar.seats);
	struct car c1;
	strcpy(c1.name,mycar.name);
	c1.price=mycar.price;
	c1.seats=mycar.seats;
	//c1=mycar;
	printf("\n %s  %f  %d",mycar.name,mycar.price,mycar.seats);
	printf("\n %s  %f  %d",c1.name,c1.price,c1.seats);
	getch();
	return 0;
}


