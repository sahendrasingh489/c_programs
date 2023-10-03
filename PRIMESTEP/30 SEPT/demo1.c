// program showing the concept of function

#include<stdio.h>

// function declaration
void display();

void main(){
    printf("\nbefore calling\n");
    display();    // function calling
    printf("\nafter calling\n");
}

// function definition
void display(){
    printf("display function called");
}