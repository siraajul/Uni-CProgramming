#include<stdio.h>
#include<conio.h>
union job
{ 
   char name[32];
   float salary;
   
}u;
main()
{
	printf("Enter name:\n"); 
	scanf("%s",&u.name);
	printf("Displaying\nName :%s\n",u.name);
	printf("Enter salary: \n");
	scanf("%f",&u.salary); 
	//printf("Displaying\nName :%s\n",u.name); 
	printf("Salary: %.1f\n",u.salary);
	printf("%u",sizeof(u));
	getch();
}

