#include <stdio.h>
int main ()
{int year, month, week, days;
printf ("enter days");
scanf ("%d", &days);
      year = days/365;
      month=(days%365)/30;
      week= days%365%30/7;
      printf   ("year%d\n",year);
      printf  ("month%d\n", month);
      printf ("week%d\n",week);


}
