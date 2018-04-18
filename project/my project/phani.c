#include<stdio.h>
#include<conio.h>
#include<string.h>
struct customer
{
	char product_name[20],product_no[10],product_id[10];
	float product_price;
}e1[20];
struct bill
{
	char bill[20],product_name[20];
	float consum,price;
}e2[20];
int add_data()
{
	printf("Enter product name:-");
	fflush(stdin);
	gets(e1[0].product_name);
	printf("enter product number:-");
	gets(e1[0].product_no);
	printf("cost of each product:-");
	scanf("%f",&e1[0].product_price);
	strncat(e1[0].product_id,e1[0].product_name,4);
	strncat(e1[0].product_id,e1[0].product_no,3);
	printf("enter product id:-");
	puts(e1[0].product_id);
}
void display(int i)
{
	printf("Name =");
	puts(e2[i].product_name);
	printf("Bill id:-");
	puts(e2[i].bill);
	printf("number of products=%f",e2[i].consum);
	printf("\ntotal bill:-%f",e2[i].price);
}
void gen_bill(int i)
{
	printf("product id:-");
	puts(e1[i].product_id);
	printf("product's name:-");
	puts(e1[i].product_name);
	printf(" number of products received by the customer:--");
	scanf("%f",&e2[0].consum);
	e2[0].price=e1[i].product_price*e2[0].consum;
	strcpy(e2[0].product_name,e1[i].product_name);
	printf("total bill=%f",e2[0].price);
	strcpy(e2[0].bill,e1[i].product_id);
	strrev(e2[0].bill);
	printf("bill id=");
	puts(e2[0].bill);
}
void delete(int i,int k)
{
	for(i=0;i<k;i++)
		e2[i]=e2[i+1];
}
int main()
{
	FILE *fi,*fp;
	char c[20];
	char username[10],password[10],cp;
	int m;
	int d;
	FILE *data;
	printf("WELCOME\n");
m:	printf("\nenter '1' if you already have an account , else press '2'");
	scanf("%d",&d);
	if(d==1)
	{
	printf(" account was loggined\n");
	goto l;
   }
	else
	{
l:  printf("enter username\n ");
	 fflush(stdin);
	 gets(username);
	  int count=0;
	 printf("Enter your password:\n");
	 for(m=0;m<10;m++)
	 {
		cp=getch();
		password[m]=cp;
		cp='*';
		printf("%c",cp);
	  }
	 password[m]='\0';
	 printf("\nRe-enter your password");
	 char pass1[10],c1;
	 for(m=0;m<10;m++)
	 {
		c1=getch();
		pass1[m]=c1;
		c1='*';
		printf("%c",c1);
	 }
	 pass1[m]='\0';
	 int l;
	 for(l=0;l<10;l++)
	 {
	  if(password[l]==pass1[l])
	  count++;
     }
     if(count==10)
    {
	 data=fopen(username,"w");
	 fputs(username,data);
	 for(m=0;m<10;m++)
	 {
		fprintf(data,"%c",password[m]);
	 }
	 printf("\nYour data has been saved to our severs");
    }
	else
	{
	printf("\npassword not matched");
	goto m;
    }
   }
     fclose(data);
	int flag=0,ch,i,j,temp,te,k=0,key;
			printf("enter your choice\n");
			printf("1.Add new Product\n2. Bill Generation\n3. Display Bill\n4. Delete Bill\n5.exit\n");
			while(flag==0)
			{
				scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					fi=fopen("product","ab");	
					add_data();
					fwrite(&e1[0],sizeof(e1[0]),1,fi);
					fclose(fi);
					printf("\n press 1 to add product  and 0 to to exit\n");
					break;
					scanf("%d",&key);
			for(i=0;i<=key;i++)
					if(key==1)
					{
						add_data();
					}
					else
					exit(0);
					break;
					
				case 2:
					fi=fopen("product","rb");
					fp=fopen("bill","ab");
					for(i=0;i<20;i++)
					{
						fread(&e1[i],sizeof(e1[i]),1,fi);
						if(e1[i].product_price==0)
							break;
					}
					printf("enter product id:-");
					fflush(stdin);
					gets(c);
					for(i=0;e1[i].product_price!=0;i++)
					{
						if(strcmp(c,e1[i].product_id)==0)
						{
							gen_bill(i);
							temp++;
						}
					}
					if(temp==0)
						printf("data not found\n");
					fwrite(&e2[0],sizeof(e2[0]),1,fp);
					fclose(fi);
					fclose(fp);
					break;
				case 3:
					fi=fopen("product","rb");
					fp=fopen("bill","rb");
					printf("enter bill id:-");
					fflush(stdin);
					gets(c);
					for(i=0;i<20;i++)
					{
						te=fread(&e1[i],sizeof(e1[i]),1,fi);
						if(te==0)
							break;
							k++;
					}
					te=1;
					for(i=0;i<20;i++)
					{
						te=fread(&e2[i],sizeof(e2[i]),1,fp);
						if(te==0)
							break;
							j++;
					}
					for(i=0;i<j;i++)
					{
						if(strcmp(c,e2[i].bill)==0)
							display(i);
					}
					fclose(fi);
					break;
				case 4:
					fp=fopen("bill","rb");
					printf("enter bill id:-");
					gets(c);
					for(i=0;i<20;i++)
					{
						te=fread(&e2[i],sizeof(e2[i]),1,fp);
						if(te==0)
							break;
							k++;
					}
					for(i=0;i<k;i++)
					{
						if(strcmp(c,e2[i].bill)==0)
						{
							delete(i,k);
							break;
						}
					}
					fclose(fp);
					fp=fopen("bill","wb");
					for(i=0;i<k-1;i++)
						fwrite(&e2[i],sizeof(e2[i]),1,fp);
					fclose(fp);
					break;
				case 5:
					printf("\n press 1 to continue and 0 to to exit");
					scanf("%d",&key);
					if(key==1)
					{
						add_data;
					}
					else
					exit(0);
					break;
				default:
				
					break;
					
			}
		}
			
		}


