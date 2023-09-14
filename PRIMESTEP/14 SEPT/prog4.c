// program showing the concept of switch control statement
#include<stdio.h>
void main(){
    int num;
    printf("Enter number : ");
    scanf("%d",&num);

    switch(num%2){ 
        case 0 : printf("Even Number\n");
                    break;
        default : printf("Odd Number\n"); 
                break;
    }
}