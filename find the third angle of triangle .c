#include <stdio.h>
int main()
{
    int  angleA, angleB ,thirdAngle ;

    printf (" enter angleA");
    scanf ("%d", & angleA);

    printf (" enter angleB");
    scanf ("%d", & angleB);

    thirdAngle = 180-(angleA + angleB);

     printf (" thirdAngle=%d ",thirdAngle );
}
