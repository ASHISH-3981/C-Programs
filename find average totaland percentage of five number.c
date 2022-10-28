#include <stdio.h>
int main()
{
     int  subject1num , subject2num , subject3num , subject4num ,subject5num ,  total , percentage, average  ;


      printf ("enter the subject1num ");
      scanf ("%d", & subject1num );

      printf ("enter the subject2num ");
      scanf ("%d", & subject2num );

      printf ("enter the subject3num ");
      scanf ("%d", & subject3num );

      printf ("enter the subject4num ");
      scanf ("%d", & subject4num );

      printf ("enter the subject5num ");
      scanf ("%d", & subject5num );

      average = (subject1num + subject2num + subject3num + subject4num + subject5num )/5;
      total    =  subject1num  + subject2num + subject3num + subject4num + subject5num ;
      percentage= (subject1num  + subject2num + subject3num + subject4num + subject5num)/500;ṣ
       printf ("average =%d\n",average);
        printf ("total =%d\n",total);
         printf ("percentage =%d\n",percentage);
}
