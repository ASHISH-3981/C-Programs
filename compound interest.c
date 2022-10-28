#include <stdio.h>
int main ()
{
int  finalamount, principal, interestrate ,n , time ;

 printf ( "enter the principal " );
 scanf ( "%d",&principal);
printf ( "enter the interestrate  " );
 scanf ( "%d",& interestrate );
printf ( "enter the n" );
 scanf ( "%d",&n);
 printf ( "enter the time " );
 scanf ( "%d",& time );


 finalamount= principal*(interestrate/n+1)^n*time;

 printf ("finalamount %d",finalamount);

}
