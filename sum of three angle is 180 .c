#include<stdio.h>
int main ()
{ int angleA , angleB , angleC , sum  ;

   printf ("enter angleA ");
   scanf  ("%d",&angleA);

   printf ("enter angleB ");
   scanf  ("%d",&angleB);

   printf ("enter angleC ");
   scanf  ("%d",&angleC);

   sum = angleA + angleB + angleC ;

   if (sum == 180 )
   printf ("complete triangle ");

    else
    printf ("not complete triangle");

}
