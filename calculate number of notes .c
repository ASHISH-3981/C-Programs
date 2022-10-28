#include<stdio.h>
int main ()
{
    int   hundred=100, fifty=50, twenty=20, ten=10, five=5,four=4, three=3,two=2,one=1, amount ;

          printf ("enter amount");
          scanf ("%d",&amount);

  hundred=    amount/100;
  fifty  =   (amount%100)/50;
  twenty =   (amount%100%50)/20;
  ten    =   (amount%100%50%20)/10;
  five   =   (amount%100%50%20%10)/5;
  four   =   (amount%100%50%20%10%5)/4;
  three  =   (amount%100%50%20%10%5%4)/3;
  two    =   (amount%100%50%20%10%5%4%3)/2;
  one    =   (amount%100%50%20%10%5%4%3%2)/1;

  printf ("hundred%d\n",hundred );
  printf ("fifty%d\n",fifty );
  printf ("twenty%d\n",twenty );
  printf ("ten%d\n",ten );
  printf ("five%d\n",five);
  printf ("four%d\n",four );
  printf ("three%d\n",three );
  printf ("two%d\n",two );
  printf ("one%d\n",one );

}
