#include <stdio.h>
#include<conio.h>
int main()
{ 
   int i = 873; // initialize int i
   double f = 12394.36; // initialize double f
   char s[] = "Happy Birthday"; // initialize char array s

   printf( "Using precision for integers  " );
   printf( "%.4d \n %.9d \n\n", i, i );

   printf( "Using precision for floating-point numbers   " );
   printf( "%.3f \n %.3e\n %.3g \n\n", f, f, f );  
   
 	printf( "Using precision for strings  " );
   printf( "%.11s \n", s );
   getch();
}
