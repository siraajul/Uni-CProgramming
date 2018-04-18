#include<stdio.h>
#include<conio.h>
main()
{
	char name[20];
	int rn;
	float marks;
	FILE *fp;
	scanf("%s%d%f",name,&rn,&marks);
	fp=fopen("data.txt","w");
	fprintf(fp,"%s %d %f",name,rn,marks);
	printf("data saved");
	getch();
}
