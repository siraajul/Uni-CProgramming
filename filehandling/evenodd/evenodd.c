#include<stdio.h>
#include<conio.h>
int main()
{
 	FILE *ptr;
 	FILE *fodd;
 	FILE *feven;
 	int i,n;
 	ptr=fopen("text1.txt","w");
 	printf("enter the  numbers");
 	for(i=0;i<5;i++)	
 	{
 		scanf("%d",&n);
 		fprintf(ptr,"%d\n",n);
 	}
 	printf("data saved");
 	fclose(ptr);

 	ptr=fopen("text1.txt","r");
 	fodd=fopen("odd.txt","w");
 	feven=fopen("even.txt","w");
 
 	while(!feof(ptr))
 	{
 		fscanf(ptr,"%d\n",&n);
 		if(n%2==0)
 		fprintf(feven,"%d\n",n);
 		else
 		fprintf(fodd,"%d\n",n);
 	}
 	fclose(feven);
 	fclose(fodd);
 	fclose(ptr);
 	getch();
 	return 0;
}
