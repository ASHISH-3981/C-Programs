#include<stdio.h>
int main()
{
int m,n,i,j,flag ;

 printf("enter the number");
 scanf (" %d%d",&m,&n);

 for (i=m+1;i<n;i++)
 {
           flag =0;

          for(j=2; j<i;j++)
          {
          if (i%j==0)
          {
          flag=1;
          break;
          }
          }
          if(flag==0)
        {
        printf ("%d\n\n\n",i);
        }
      }

}




