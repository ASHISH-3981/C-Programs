#include <stdio.h>
#include <math.h>

int main()

{
float a,b,c,discriminant , root1 , root2, real, imaginary;
printf ("enter the co-effecient value ");
scanf ("%f%f%f",&a,&b,&c);

 discriminant = b*b-4*a*c;
if (discriminant>=0)

    {
        if(discriminant>0)
        {
        printf ("roots are real and unequal\n ");
        root1 = ((-b+sqrt(discriminant))/2*a);
        root2= ((-b-sqrt(discriminant))/2*a);
        printf ("root1= %f and root2= %f",root1, root2);
        }
       else
        {
        printf ("root are real and equal\n");

        root1=root2=b/(2*a);
        printf("root1=%f and root2=%f",root1,root2);
        }
    }
else
  {
   printf ("root and imaginary");
   real =-b/(2*a);
   imaginary= sqrt (fabs(discriminant))/(2*a);
   printf ("real part %f, imagimary part= %f",real,imaginary);
}

}
