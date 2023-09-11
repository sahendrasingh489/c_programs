// program showing the concept of sequential control statement

#include<stdio.h>
void main(){
    int p,t;
    float r,si;   

    printf("Enter principal : ");
    scanf("%d",&p);

    printf("Enter Rate : ");
    scanf("%f",&r);

    printf("Enter time : ");
    scanf("%d",&t);
    
    si = (p*r*t)/100;
    printf("simple interest : %.2f\n",si);
}