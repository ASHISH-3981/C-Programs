#include <stdio.h>
int main()
{
int a,b,c,d;

printf (" enter a,b,c,d");
scanf ("%d%d%d%d",&a, &b, &c, &d );

if (a>b && a>c && a>d)

 printf ("a is biggest ");

 else if (b>a && b>c && b>d )
printf ("b is biggest ");

else if ( c>a && c>b && c>d)
printf (" c  is greater ");

else
printf ("d is biggest ");
}

