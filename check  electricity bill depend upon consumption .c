#include<stdio.h>
int main ()
{
int  unit , amount ;

printf ("enter the unit ");
scanf ("%d",&unit);

if (unit < 100)
amount = unit *0 ;

 else if (unit >99 && unit<200 )
 amount = unit *1;

 else
 amount = unit *3 ;

 printf("amount %d", amount );

 }
