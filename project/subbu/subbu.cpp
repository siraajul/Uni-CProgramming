#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void design();
void movies();
int calculate(int,int);
int conform(int);
void cancel();
void prospond();
void credits();
void exits();
int ll[10]={150,150,150};
char list[5][20]={"premam","Dhoni","docter strange"};
main()
{
stt:
int ch,a;
design();
scanf("%d",&ch);
ext:
switch(ch)
{
case 1:
{ 
printf("\n\n");
movies();
//goto g2;
}
break;
case 2:
{
int tk;
movies();
g1:
printf("\n\nEnter your Movie Choice\n");
scanf("%d",&a);
if(a<4)
{
         printf("CHOSEN MOVIE:\t\t%s",list[a-1]);
}
else
{
	printf("Wrong Entry!Try Again");
	goto g1;
}
printf("\n\nEnter the Number of Tickets you want to Book");
scanf("%d",&tk);
calculate(a,tk);
}
break;
case 3:
{
	cancel();
}
break;
case 4:
{
	exits();
}
break;
default:
	{
     printf("\n\n          !Wrong choice.Try Again.");
	 goto stt;	
    }

 }
}
void design()
{ 
    system(" COLOR 5F");
	printf("\n\n\t\t\t   Press 1 to see the Movie list");
	printf("\n\n\t\t\t   Press 2 to Book a Ticket");
	printf("\n\n\t\t\t   Press 3 to Canceal a Ticket");
	printf("\n\n\t\t\t   Press 4 to Exit");
	printf("");
	printf("");
	printf("\n");
}
void movies()
{
	
    printf("SL.NO     MOVIE NAME    DURATION(hr:min)    COST");
	printf("\n\n1.        premam       2:35    150 ");
	printf("\n2.        dhoni         2:40      150 ");
	printf("\n3.        docter strange     1:45  150");
}
int calculate(int a1,int tk1)
{
	if(a1<4)
	{
		int g,cnf;
	  if(tk1<=5)
	  {
	  printf("\nYour ticket cost Rs");
	  g=ll[a1]*tk1;
	  printf("%d",g);	
	  }
	  else if(tk1>5 && tk1<=10)
	  {
	  	
	  	int tkt=ll[a1]*tk1;
	  	printf("\nYour Ticket Cost Rs%d\n",tkt);
	  }
	  else
	  {
	  	int tkt2=ll[a1]*tk1;
	  	printf("\nYour Ticket Cost Rs%d\n",tkt2);
	  	int ds2=0.10*tkt2;
	  	printf("Amount to be Paid Rs%d\n",g);
	  }
	  g3:
	printf("\nPress 1 to CONFORM\n");
	printf("\nPress 0 to CANCEL\n");
	scanf("%d",&cnf);
	if(cnf==0)
	{
	printf("Canceled by User");
	exit(0);	
	}
	else if(cnf==1)
	{
		conform(g);
	}
	else
	{
		printf("Wrong Choice!Try Again");
		goto g3;
	}
   }
}
   int conform(int g)
   {
   	int txno=12345*g;
   	printf("\nYour Transaction Number%d\n",txno);
   	printf("\nCONGRATULATIONS Your Tickets Has Been CONFORMED\n");
   	printf("Please note Your Transaction Numbere and Amount paid for Future use of prospond or cancelation");
   }
   void cancel()
   {
   	int txno,apd;
   	printf("Enter your Transaction Number\n");
   	scanf("%d",&txno);
   	printf("Enter the Exact Amount You have Paid");
   	scanf("%d",&apd);
   	int chk=txno/12345;
   	if(chk==apd)
   	{
   	printf("Your Ticket has been successfuly canceled.\n" );
   	printf("Your amount will be refunded shortly by reverse payment");
    }
    else
    {
    	printf("Sorry!Transaction no. or amount entered wrong"); 
    }
}
void exits()
{
 exit(0);	
}
