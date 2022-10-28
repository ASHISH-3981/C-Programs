# include <stdio.h>
 void main ()
{
     int principal,rate,time,si ;

    printf ( "enter  principal");
    scanf ("%d", &principal);

    printf ("enter rate");
    scanf ("%d",   &rate);

    printf (" enter time");
    scanf ("%d",    &time);

    si =(principal*rate*time)/100;
    printf ("simple interest=%d", si);
}
