// program showing the concept of nested if else statement 

#include<stdio.h>
void main(){
    int age;
    char ch;
    printf("Enter nationality(i/I) for Indian : ");
    scanf("%c",&ch);

    if(ch=='i' || ch=='I'){
        printf("Enter age : ");
        scanf("%d",&age);

        if(age>=18)
            printf("Eligible to vote\n");
        else
            printf("Not eligible to vote\n");    
    }
    else{
        printf("Not an indian\n");
    }    
}