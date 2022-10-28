#include<stdio.h>
int main()
{
int number ;

printf ("enter the number ");
scanf ("%d",&number );

if (number%3==0 && number%5==0)
    printf (" number is divisible by both 3 and 5 ");

    else if (number%3==0)

    printf  (" number is divisible by 3 " );


     else if (number%5==0)
    printf (" number is divisible by 5 ");


    else
    printf ( "both numbers are not divisible by 3 and 5 " );
}

