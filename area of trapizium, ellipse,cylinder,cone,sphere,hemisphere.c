#include<stdio.h>
#include<math.h>
int main()
{
float area,height,a,b,radius,pie=3.14 ;
printf ( "enter the a ");
scanf ("%f",&a);

printf ("enter the b ");
scanf ("%f",&b);

printf ("enter the height");
scanf  ("%f", &height);
     area= (a+b/2)*height;
 printf ("area of trapezium= %f\n\n",area);

 printf ("enter the a");
 scanf ("%f",&a);

 printf (" enter the b");
 scanf ("%f",&b);

  area = pie*a*b;
  printf (" area of ellipse=%f\n\n",area);

  printf ("enter the radius ");
  scanf ("%f",&radius);

  printf ("enter the height");
  scanf  ("%f",&height);

  area = (2*pie*radius*height)+2*pie*radius*radius ;
  printf ("area of cylinder=%f\n\n",area);

  printf ("enter the radius");
  scanf ("%f", &radius);

  printf ("enter the height");
  scanf ("%f",&height);

  area = pie*radius*(radius+sqrt(height*height+radius*radius));
  printf ("area of the cone=%f\n\n",area);

  printf ("enter the radius");
  scanf ("%f",&radius);

  area = (4*pie*radius*radius);

  printf ("area of the sphere=%f\n\n", area);

  printf ("enter the radius ");
  scanf ("%f",&radius);

  area= (3*pie*radius*radius);

  printf ("area of hemisphere=%f\n\n",area);

}
