#include <stdio.h>
int main ()
{
int a,b,c ;
printf ("enter the number a,b and c ");
scanf ( " %d%d%d",&a,&b,&c);


if (a>b)
{       if (a>c)
        {
        printf ("a is lartgest%d",a);
        }
        else
        {
        printf ("c is largest%d",c);
        }
}
else
       if (b>c)
       {
       printf (" b is largest%d",b);
       }
       else
       {
       printf ("c is largest%d",c);
       }
}




