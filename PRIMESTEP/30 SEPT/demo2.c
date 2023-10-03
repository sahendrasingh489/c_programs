// program showing the concept of function

#include<stdio.h>

// function declaration
void display();

void main(){
    printf("\nbefore calling\n");
    display();    // function calling
    display();
    printf("after calling\n");
}

// function definition
void display(){
    printf("display function called\n");
}