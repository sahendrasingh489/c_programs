// program showing the concept of function
// with ARGUMENT and no RETURN TYPE
#include<stdio.h>

 // function definition
void addition(int a,int b){
    printf("Addition : %d\n",a+b);
} 

void main(){ 
    int a,b;
    printf("Enter values of a and b : ");
    scanf("%d%d",&a,&b);
    addition(a,b);
}