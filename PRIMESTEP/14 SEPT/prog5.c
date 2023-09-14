// program showing the concept of switch control statement
#include<stdio.h>
void main(){
    int code,a,b;
    printf("Enter values of a and b : ");
    scanf("%d%d",&a,&b);

    printf("--Select Operation--\n");
    printf("\t1 for addition\n");
    printf("\t2 for subtraction\n");
    printf("\t3 for exit\n");
    
    printf("Enter code : ");
    scanf("%d",&code);

    switch(code){ 
        case 1 : printf("addition : %d\n",a+b);
                    break;
        case 2 : printf("subtraction : %d\n",a-b);
                    break;
        case 3 : printf("Want to quit out\n");
                    break;
        default : printf("Invalid Number\n"); 
                break;
    }
}