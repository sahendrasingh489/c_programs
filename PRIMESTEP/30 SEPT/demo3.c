// program showing the concept of function
// NO ARGUMENT AND NO RETURN TYPE
#include<stdio.h>

// function definition
void display(){
    printf("display function called\n");
}

void main(){
    printf("\nbefore calling\n");
    display();    // function calling
    display();
    printf("after calling\n");
}

