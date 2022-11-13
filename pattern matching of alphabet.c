#include <stdio.h>
int main()

{
int i,j,n;
printf ("enter the total number of lines :-");
scanf ("%d",&n);

for (i=65;i<=n;i++)
      {
      for (j=65;j<=i;j++)
      {
      printf ("%c,",i);
      }
      printf ("\n\n");

       }
}
