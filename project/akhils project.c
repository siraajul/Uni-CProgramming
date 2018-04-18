#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct shirts
	{
		int size;
		char brand[10];
		float price;
	}c1[3];
struct jeans
	{
		int size;
		char brand[10];
		float price;
	}c2[3];
struct footware
	{
		int size;
		char brand[10];
		float price;
	}f[3];
struct books
	{
		int edition;
		char publications[10];
		float price;
	}cb[3];
	
struct bill
	{
		char doornum[5];
		char city[10];
		char district[10];
		char pin[10];
		int quantity;
		float total;
	}b;
	int sortcase1()
	{
		printf("enter '1' to view high prices first & '2' for low prices");
						printf("\nenter your choice: ");
						int s;
						scanf("%d",&s);
						struct shirts temp;
                    	if(s==1)
	                    {
		                   int i,j;
		                   for(i=0;i<3;i++)
		                   {
			                  for(j=0;j<3;j++)
			                  {
				                    if(c1[j].price<c1[j+1].price)
				                   {
					                 temp=c1[j];
					                 c1[j]=c1[j+1];
					                 c1[j+1]=temp;
				                    }
			                    }
		                    }
		                    printf("\nsorted data : ");
		                    for(i=0;i<3;i++)
		                    {  
							                printf("\nsize :");
							                printf("%d",c1[i].size);
							                printf("\nPrice :");
							                printf("%.2f",c1[i].price);
							                printf("\nBrand :");
							                puts(c1[i].brand);
						     }
	                    }
	                              else if(s==2)
	                               { 
	                                  int i,j;
	                                  for(i=0;i<3;i++)
		                              {
			                             for(j=0;j<(3-i-1);j++)
			                               {
				                             if(c1[j].price>c1[j+1].price)
				                                {
					                               temp=c1[j];
					                               c1[j]=c1[j+1];
					                               c1[j+1]=temp;
				                                }
			                                }                                
		                                }
										printf("\nsorted data : ");
		                                for(i=0;i<3;i++)
		                                 {  
							                printf("\nsize :");
							                printf("%d",c1[i].size);
							                printf("\nPrice :");
							                printf("%.2f",c1[i].price);
							                printf("\nBrand :");
							                puts(c1[i].brand);
						                 }
										  printf("\n");	
	                                }
	                              else
	                              {
								    printf("Please enter the correct choice\n");
	                               }
						
	}
	int sortcase2()
	{
		printf("enter '1' to view high prices first & '2' for low prices");
						printf("\nenter your choice: ");
						int s;
						scanf("%d",&s);
						struct jeans temp;
                    	if(s==1)
	                    {
		                   int i,j;
		                   for(i=0;i<3;i++)
		                   {
			                  for(j=0;j<3;j++)
			                  {
				                    if(c2[j].price<c2[j+1].price)
				                   {
					                 temp=c2[j];
					                 c2[j]=c2[j+1];
					                 c2[j+1]=temp;
				                    }
			                    }
		                    }
		                    printf("\nsorted data : ");
		                    for(i=0;i<3;i++)
		                    {
							                printf("\nsize :");
							                printf("%d",c2[i].size);
							                printf("\nPrice :");
							                printf("%.2f",c2[i].price);
							                printf("\nBrand :");
							                puts(c2[i].brand);
						     }
	                    }
	                              else if(s==2)
	                               { 
	                                 int i,j;
	                                  for(i=0;i<3;i++)
		                              {
			                             for(j=0;j<(3-i-1);j++)
			                               {
				                             if(c2[j].price>c2[j+1].price)
				                                {
					                               temp=c2[j];
					                               c2[j]=c2[j+1];
					                               c2[j+1]=temp;
				                                }
			                                }                                
		                                }
										printf("\nsorted data : ");
		                                 for(i=0;i<3;i++)
		                                 { 
							                printf("\nsize :");
							                printf("%d",c2[i].size);
							                printf("\nPrice :");
							                printf("%.2f",c2[i].price);
							                printf("\nBrand :");
							                puts(c2[i].brand);
						                  }
							                  printf("\n");	
	                                }
	                              else
	                              {
	                                printf("Please enter the correct choice\n");
	                               }
						
	}
	int sort2()
	{
			printf("enter '1' to view high prices first & '2' for low prices");
						printf("\nenter your choice: ");
						int s;
						scanf("%d",&s);
						struct footware temp;
                    	if(s==1)
	                    {
		                   int i,j;
		                   for(i=0;i<3;i++)
		                   {
			                  for(j=0;j<3;j++)
			                  {
				                    if(f[j].price<f[j+1].price)
				                   {
					                 temp=f[j];
					                 f[j]=f[j+1];
					                 f[j+1]=temp;
				                    }
			                    }
		                    }
		                    printf("\nsorted data : ");
		                    for(i=0;i<3;i++)
		                    {
							   printf("\nsize :");
							   printf("%d",f[i].size);
							   printf("\nPrice :");
							   printf("%.2f",f[i].price);
							   printf("\nBrand :");
							   puts(f[i].brand);
						     }
						      printf("\n");
	                    }
	                              else if(s==2)
	                              { 
	                                 int i,j;
	                                  for(i=0;i<3;i++)
		                              {
			                             for(j=0;j<(3-i-1);j++)
			                               {
				                             if(f[j].price>f[j+1].price)
				                                {
					                               temp=f[j];
					                               f[j]=f[j+1];
					                               f[j+1]=temp;
				                                }
			                                }                                
		                                }
							printf("\nsorted data : ");
		                    for(i=0;i<3;i++)
		                    {
							                printf("\nsize :");
							                printf("%d",f[i].size);
							                printf("\nPrice :");
							                printf("%.2f",f[i].price);
							                printf("\nBrand :");
							                puts(f[i].brand);
						     
						     }	
						      printf("\n");
	                                }
	                              else
	                              {
	                                printf("Please enter the correct choice\n");
	                             }
					
	}
	int sort3()
	{
		printf("enter '1' to view high prices first & '2' for low prices");
						printf("\nenter your choice: ");
						int s;
						scanf("%d",&s);
						struct books temp;
                    	if(s==1)
	                    {
		                   int i,j;
		                   for(i=0;i<3;i++)
		                   {
			                  for(j=0;j<3;j++)
			                  {
				                    if(cb[j].price<cb[j+1].price)
				                   {
					                 temp=cb[j];
					                 cb[j]=cb[j+1];
					                 cb[j+1]=temp;
				                    }
			                    }
		                    }
		                    printf("\nsorted data : ");
		                    for(i=0;i<3;i++)
		                    {
							                printf("\nsize :");
							                printf("%d",cb[i].edition);
							                printf("\nPrice :");
							                printf("%.2f",cb[i].price);
							                printf("\nBrand :");
							                puts(cb[i].publications);
						     
						     }
						      printf("\n");
	                    }
	                              else if(s==2)
	                              {
	                              	  int i,j;
	                                  for(i=0;i<3;i++)
		                              {
			                             for(j=0;j<(3-i-1);j++)
			                               {
				                             if(cb[j].price>cb[j+1].price)
				                                {
					                               temp=cb[j];
					                               cb[j]=cb[j+1];
					                               cb[j+1]=temp;
				                                }
			                                }                                
		                                }
										printf("\nsorted data : ");
		                    for(i=0;i<3;i++)
		                    {
							                printf("\nsize :");
							                printf("%d",cb[i].edition);
							                printf("\nPrice :");
							                printf("%.2f",cb[i].price);
							                printf("\nBrand :");
							                puts(cb[i].publications);
						     
						     }
							 printf("\n");	
	                                }
	                              else
	                              {
	                               printf("Please enter the correct choice\n");
	                               }
						
	}
int save(struct bill b)
{
    FILE *bill;
	bill=fopen("bill.txt","a+");
	printf("\n");
	fputs(b.city,bill);
	printf("\n");
	fputs(b.district,bill);
	printf("\n");
	fputs(b.doornum,bill);
	printf("\n");
	fputs(b.pin,bill);
	printf("\n");
	fprintf(bill,"%d",b.total);	
}

int billing(struct bill b,float price,int item)
{
	int k=item;
	printf("\nEnter the details :");
	printf("\nDoor number : ");
	gets(b.doornum);
	printf("\nCity : ");
	gets(b.city);
	printf("\nDistrict : ");
	gets(b.district);
	printf("\nPin :");
	gets(b.pin);
	printf("\nQuantity of the item : ");
	scanf("%d",&b.quantity);
	printf("\n Extra Rs.30/ is charged for transport");
	printf("\nTotal :");
	b.total=(price*b.quantity)+30;
	printf("%.2f",b.total);
    save(b);
    printf("\t==========================================================");
    printf("\nyour order has been placed succesfully...");
    printf("\nTotal money has to be paid when the package recieved");
    printf("\nData saved to our servers");
    printf("\t==========================================================");
    
    printf("\n######### We are so grateful for choosing our site!!! ########### ");
}
int main()
{
	char username[10],password[10],ch;
	int i;
	int d;
	FILE *data;
	printf("WELCOME TO ::\n");
	printf("\n################## FLIJAZONTRA DEAL ####################");
	printf("\nFor having a great experience in this site you need to login into your accuont of this site ");
m:	printf("\nenter '1' if you already have an account , else press '2'");
	printf("press 1 or 2 accornding to yur choice\n");
	scanf("%d",&d);
	if(d==1)
	{
	printf("we are grateful that your are having an account , then login to your account and have great experience\n");
	goto l;
   }
	else
	{
	 int count=0;
l:	 printf("Enter the username having only 10 characer in it\n ");
	 fflush(stdin);
	 gets(username);
	 printf("Enter your password:\n");
	 for(i=0;i<10;i++)
	 {
		ch=getch();
		password[i]=ch;
		ch='*';
		printf("%c",ch);
	  }
	 password[i]='\0';
	 printf("\nRe-enter your password");
	 char pass1[10],ch1;
	 for(i=0;i<10;i++)
	 {
		ch1=getch();
		pass1[i]=ch1;
		ch1='*';
		printf("%c",ch1);
	 }
	 pass1[i]='\0';
	 int j;
	 for(j=0;j<10;j++)
	 {
	  if(password[j]==pass1[j])
	  count++;
     }
     printf("%d",count);
     if(count==10)
    {
	 data=fopen(username,"w");
	 fputs(username,data);
	 for(i=0;i<10;i++)
	 {
		fprintf(data,"%c",password[i]);
	 }
	 printf("\nYour data has been saved to our severs");
    }
	else
	{
	printf("\nThe passwords you typed are not matching");
	goto m;
    }
   }
     fclose(data);
r:	printf("we have so many collections in our site select your choice from them \n");
	printf("select your deparment in which you want to shop\n");
	printf("press '1' for clothing department\n");
	printf("Press '2' for footwear depatment\n");
	printf("press '3' for book depatment\n");
	printf("Enter '4' for exiting our site\n");
    printf("\nEnter your choice: ");
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1:
		{
			printf("press '1' for shirts\n");
			printf("press '2' for jeans\n");
			printf("\nEnter your choice");
			int c;
			scanf("%d",&c);
			switch(c)
			{
				case 1:
					{
						int i;
						for(i=0;i<3;i++)
						{
							printf("%d\n",i+1);
							fflush(stdin);
							printf("\nBrand name :");
							gets(c1[i].brand);
							printf("\nSize of shirt :");
							scanf("%d",&c1[i].size);
							printf("\nprice :");
							scanf("%f",&c1[i].price);
						}
						sortcase1();
						          printf("\nselect the  item you want to buy");
						          printf("\nenter the brand name of the item :");
						          char sname[10];
						          fflush(stdin);
						          gets(sname);
						          int item=0;
						          for(i=0;i<3;i++)
						          {
							         if(stricmp(c1[i].brand,sname)==0)
						               {
							             printf("\nBrand :");
							             puts(c1[i].brand);
							             printf("\nSize :");
							             printf("%d",c1[i].size);
							             printf("\nPrice :");
							             printf("%.2f",c1[i].price);
							             item++;
						                }
						            }
						             int l=item;
						             float price=c1[l].price;
						            billing(b,price,item);
						            
					}
					break;
					case 2:
						{
							int i;
							for(i=0;i<3;i++)
						{
							printf("%d\n",i+1);
							fflush(stdin);
							printf("\nBrand name :");
							gets(c2[i].brand);
							printf("\nSize of jeans :");
							scanf("%d",&c2[i].size);
							printf("\nprice :");
							scanf("%f",&c2[i].price);
						}
						sortcase2();
						        char sname[10];
						          printf("\nselect the  item you want to buy");
						          printf("\nenter the brand name of the item :");
						          fflush(stdin);
						          gets(sname);
						         int item=0;
						          for(i=0;i<3;i++)
						          {
							         if(stricmp(c2[i].brand,sname)==0)
						               {
							             printf("\nBrand :");
							             puts(c2[i].brand);
							             printf("\nSize :");
							             printf("%d",c2[i].size);
							             printf("\nPrice :");
							             printf("%.2f",c2[i].price);
							             item++;
						                }
						            }
						            int l=item;
						            float price=c2[l].price;
						            billing(b,price,item);
						}
						break;
						default :
							printf("\nInvalid selection ");
			}
		}
		break;
		case 2:
		{
			int i;
		                for(i=0;i<3;i++)
						{
							printf("%d\n",i+1);
							fflush(stdin);
							printf("\nBrand name :");
							gets(f[i].brand);
							printf("\nSize of shoe :");
							scanf("%d",&f[i].size);
							printf("\nprice :");
							scanf("%f",&f[i].price);
						}
						sort2();
						          printf("\nselect the  item you want to buy");
						          printf("\nenter the brand name of the item :");
						          char sname[10];
						          fflush(stdin);
						          gets(sname);
						          int item=0;
						          for(i=0;i<3;i++)
						          {
							         if(stricmp(f[i].brand,sname)==0)
						               {
							             printf("\nBrand :");
							             puts(f[i].brand);
							             printf("\nSize :");
							             printf("%d",f[i].size);
							             printf("\nPrice :");
							             printf("%.2f",f[i].price);
							             item++;
						                }
						            }
						            int l=item;
						                float price=f[l].price;
						            billing(b,price,item);	
	    }
	    break;
		case 3:
		{
			int i;
			            for(i=0;i<3;i++)
						{
							printf("%d\n",i+1);
							fflush(stdin);
							printf("\npublications name :");
							gets(cb[i].publications);
							printf("\nEdition :");
							scanf("%d",&cb[i].edition);
							printf("\nprice :");
							scanf("%f",&cb[i].price);
						}
						          sort3();
						          printf("\nselect the  book you want to buy");
						          printf("\nenter the publicatons name of the item :");
						          char sname[10];
						          fflush(stdin);
						          gets(sname);
						          int item=0;
						          for(i=0;i<3;i++)
						          {
							         if(stricmp(cb[i].publications,sname)==0)
						               {
							             printf("\npublications :");
							             puts(cb[i].publications);
							             printf("\nEdition :");
							             printf("%d",cb[i].edition);
							             printf("\nPrice :");
							             printf("%.2f",cb[i].price);
							             item++;
						                }
						            }
						            int l=item;
						            float price=cb[l].price;
						            billing(b,price,item);
	    }
	    break;
	    case 4:
	    	exit (0);
		default :
			{
	         printf("Invalid selection!!!!!!\n Restart your shopping\n");
		     goto r;
	       }
    }
    getch();
    return 0;
}

