#include <stdio.h>
int main()
{
    int  radius,height;
    float pie=3.14 ,volume;

    printf ("enter radius ");
    scanf  ("%d",&radius);

    printf ("enter height");
    scanf  ("%d",&height);

    volume= pie*radius*radius*height;

    printf ("volume of cylinder = %f",volume);


}
