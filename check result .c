#include<stdio.h>
int main ()
{
int sub1, sub2 ,sub3 ,sub4 , sub5, sub6 ,total , percentage ;

 printf ("enter number of sub1 ");
 scanf ("%d", &sub1);

 printf ("enter number of sub2 ");
 scanf ("%d", &sub2);

 printf ("enter number of sub3 ");
 scanf ("%d", &sub3);

 printf ("enter number of sub4 ");
 scanf ("%d", &sub4);

 printf ("enter number of sub5 ");
 scanf ("%d", &sub5);

 printf ("enter number of sub6 ");
 scanf ("%d", &sub6);

 total = (sub1 + sub2 + sub3 + sub4 + sub5 +sub6);

percentage = (sub1 + sub2 + sub3 + sub4 + sub5 +sub6) /6 ;

printf ("total mark obtained %d\n",total);

 printf ("percentage%d\n",percentage);


if (percentage >=60)
printf ("first");

else if (percentage>=45 && percentage<=60)
printf ("second");

else if (percentage >=30 && percentage <=45)
printf ("third");

 else
 printf ("fail");

}
