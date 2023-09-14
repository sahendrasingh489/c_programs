// program showing the concept of switch control statement
#include<stdio.h>
void main(){
    int a,b;
    char code;
    printf("Enter values of a and b : ");
    scanf("%d%d",&a,&b);
        getchar();
    printf("--Select Operation--\n");
    printf("\t+ for addition\n");
    printf("\t- for subtraction\n");
    printf("\te for exit\n");
    
    printf("Enter code : ");
    scanf("%c",&code);

    switch(code){ 
        case '+' : printf("addition : %d\n",a+b);
                    break;
        case '-' : printf("subtraction : %d\n",a-b);
                    break;
        case 'e' : printf("Want to quit out\n");
                    break;
        default : printf("Invalid Number\n"); 
                break;
    }
}