// program to print pattern using function
#include<stdio.h>
void printPattern(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==1 || i==3 || j==1 || j==5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void main(){
    printPattern();
}