// program to find out compond interest
#include<stdio.h>
#include<math.h>
void main(){
    int p,t;
    float r,amt,ci;
    printf("Enter p,r and t : ");
    scanf("%d%f%d",&p,&r,&t);

    amt = p*pow(1+r/100,t);
    printf("amt : %.2f\n",amt);
        ci = amt-p;
    printf("ci : %.2f\n",ci);
}