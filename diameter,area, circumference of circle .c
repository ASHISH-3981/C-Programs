# include <stdio.h>
 void main ()
{
     int radius ;
     float  diameter,circumference, area,pie=3.14   ;

      printf ("enter the radius");
      scanf ("%d",&radius);

      diameter= 2*radius;
      circumference =2*pie*radius;
      area= pie*radius*radius;
      printf ("diameter of a circle=%f\n",diameter);
      printf ("circumference of a circle %f\n",circumference);
      printf ("area of the circle %f\n",area);
}
