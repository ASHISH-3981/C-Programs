#include <stdio.h>
int main()
{

    int   centimeter;
    float meter, kilometer;

    printf ("enter the centimeter ");
    scanf ("%d",&centimeter);

     meter= centimeter /100;
     kilometer=centimeter/100000;

     printf ("meter=%f\n",meter);
     printf ("kilometer%f\n",kilometer);

}
