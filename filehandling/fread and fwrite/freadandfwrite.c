#include<stdio.h>
#include<conio.h>
struct item
{
	int id;
	char name[20];
}r[20];
main()
{
	int i=0,d,j;
	struct item temp;
	FILE *fp;
	fp=fopen("newdata.txt","w");
	for(i=0;i<3;i++)
	{
		scanf("%d%s",&r[i].id,r[i].name);
	}
	fwrite(&r,sizeof(r),1,fp);
	fclose(fp);
	printf("Record saved");
	fp=fopen("newdata.txt","r");
	fread(&r,sizeof(r),1,fp);
	for(i=0;i<3;i++)
	{
        printf("%d   %s\n",r[i].id,r[i].name);
	}
	fclose(fp);
	printf("enter id whose you want");
	scanf("%d",&d);
	i=0;
	fp=fopen("newdata.txt","r");
	while(!feof(fp))
	{
		fread(&r[i],sizeof(r[i]),1,fp);
		if(r[i].id==d)
		{
			printf("%d  %s",r[i].id,r[i].name);
			break;
		}
		i++;
	}

/*for(i=0;i<3;i++)
{
printf("%d   %s\n",r[i].id,r[i].name);
}*/
printf("\nafter sorting\n");
for(i=1;i<3;i++)
{
for(j=0;j<2;j++)
{
if(r[j].id>r[j+1].id)
{
	temp=r[j];
	r[j]=r[j+1];
	r[j+1]=temp;
}
}
}
for(i=0;i<3;i++)
{
printf("%d   %s\n",r[i].id,r[i].name);
}
getch();
}
