// program showing the concept of function
// NO ARGUMENT with RETURN TYPE
#include<stdio.h>

 // function definition
int addition(){
    int a,b;
    printf("Enter values of a and b : ");
    scanf("%d%d",&a,&b);
    return a+b;
} 

void main(){ 
//    int var = addition();  // function calling
//    printf("var : %d\n",var);

printf("var : %d\n",addition());
}