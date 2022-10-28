#include<stdio.h>
#include<math.h>
int main()
{
float volume,height,b1,b2,A,B,C, length,radius,pie=3.14 ;
printf ( "enter the b1");
scanf ("%f",&b1);

printf ("enter the b2 ");
scanf ("%f",&b2);

printf ("enter the height");
scanf  ("%f", &height);

printf ("enter the length");
scanf ("%f", &length);

     volume=((b1+b2)*height*length)/2 ;

 printf ("volume of trapezium= %f\n\n",volume);

 printf ("enter the A");
 scanf ("%f",&A);

 printf (" enter the B");
 scanf ("%f",&B);

 printf ("enter the C ");
 scanf ("%f",&C);

  volume = (4/3)*pie *A*B*C ;

  printf (" volume of ellipse=%f\n\n",volume);

  printf ("enter the radius ");
  scanf ("%f",&radius);

  printf ("enter the height");
  scanf  ("%f",&height);

  volume = pie*radius*radius*height;
  printf ("volume of cylinder=%f\n\n",volume);

  printf ("enter the radius");
  scanf ("%f", &radius);

  printf ("enter the height");
  scanf ("%f",&height);

  volume = (pie*radius*radius)/3;
  printf ("volume of the cone=%f\n\n",volume);

  printf ("enter the radius");
  scanf ("%f",&radius);

  volume = (4/3)*pie*radius*radius*radius ;

  printf ("volume of the sphere=%f\n\n", volume );

  printf ("enter the radius ");
  scanf ("%f",&radius);

  volume = (pie*radius*radius*radius)*2/3;

  printf ("volume of hemisphere=%f\n\n",volume);

}
