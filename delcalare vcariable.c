#include <stdio.h>
 main()
{
//Delclare and initialize variables;
int num;
float amount;
char code;
double pi;
long int population_of_India;
char message[10];

printf ("\n enter the num");
scanf ("%d",&num);

printf ("\n enter the amount");
scanf ("%f",&amount);

printf ("\n enter the pi");
scanf ("%e",&pi);

printf ("\n enter the population_of_India");
scanf ("%ld",&population_of_India);

printf ("\n enter the message ");
scanf ("%s",&message);

printf ("\n enter the code");
scanf ("%c",&code);

printf ("\n num=%d   \n amount=%f   \n pi=%e   \n populationof India=%ld   \n code=%c    \n message=%s ",num,amount,code,pi,population_of_India,message);

}

