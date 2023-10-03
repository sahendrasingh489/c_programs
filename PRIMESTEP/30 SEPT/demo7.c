// program showing the concept of function
// with ARGUMENT and with RETURN TYPE
#include<stdio.h>

 // function definition
int addition(int a,int b){
    return a+b;
} 

void main(){ 
    int a,b;
    printf("Enter values of a and b : ");
    scanf("%d%d",&a,&b);
    printf("addition : %d\n",addition(a,b));
}