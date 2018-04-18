#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	int v=0,c=0,sp=0;
	FILE *ptr;
	ptr=fopen("qwe.txt","w");
	while(ch!='.')
	{
		ch=getche();
		fputc(ch,ptr);
	}
	fclose(ptr);
	
	ptr=fopen("qwe.txt","r");
	while((ch=fgetc(ptr))!=EOF)
	{
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch =='u')
		v++;
		else if(ch==' ')
		sp++;
		else
		c++;
	}
	printf("vowels=%d\n con=%d space=%d",v,c,sp);
	getch();
}
