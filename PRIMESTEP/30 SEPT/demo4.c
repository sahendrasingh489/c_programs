// program showing the concept of function
// NO ARGUMENT AND NO RETURN TYPE
#include<stdio.h>

 // function definition
void addition(){
    int a,b;
    printf("Enter values of a and b : ");
    scanf("%d%d",&a,&b);

    printf("Addition : %d\n",a+b);
} 

void main(){ 
   addition();  // function calling
}