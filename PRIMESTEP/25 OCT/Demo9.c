// program showing the concept of macro
#include<stdio.h>
#define PI 3.14 // object like macro
#define area(r) PI*r*r // function like macro
void main()
{
    float r;
    printf("PI : %.2f\n",PI);
    printf("Enter radius : ");
    scanf("%f",&r);

    printf("Area of circle : %.2f\n",area(r));
}