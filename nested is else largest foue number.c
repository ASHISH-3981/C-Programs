#include <stdio.h>
int main()
{
int a,b,c,d ;

printf ("enter the a,b,c and d");
scanf ("%d%d%d%d",&a,&b,&c,&d);

if (a>b)
{
    if (a>c)
      {
      if (a>d)
      {
      printf ("a is largest%d",a);
      }
      else
      {
      printf (" d is largest%d",d);
      }

      }
}
else if (b>c)
      {
          if (b>d)
         {
            printf ("b is largest number%d",b);
         }
         else
         {
             printf ("d is largest number%d",d);
         }
      }
else
{
    if (c>d)
    {
        printf ("c is largest number %d",c);

    }
    else
        {
            printf (" d is largest %d",d);
        }
}



}









