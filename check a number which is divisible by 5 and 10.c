#include<stdio.h>
int main()
{
   int   number ;

    printf ("enter the number ");
    scanf ("%d",&number );

    if (number%5==0 && number%10==0)
    printf (" number is divisible by both 5 and 10 ");

    else if (number%5==0)

    printf  (" number is divisible by 5 " );


     else if (number%10==0)
    printf (" number is divisible by 10 ");


    else
    printf ( "both numbers  are not divisible by 5 and 10 " );
}
