// program showing the concept of switch control statement
// output : error
#include<stdio.h>
void main(){
    char ch='a';
    switch(ch){
        case 'a' : printf("statement 1\n");
                break;
        case 97 : printf("statement 2\n");
                break;
        default : printf("invalid selection\n");
                break;
    }
}