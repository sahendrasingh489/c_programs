// program showing the concept of nested if else statement 

#include<stdio.h>
void main(){
    int a,b;
    printf("Enter values of a and b : ");
    scanf("%d%d",&a,&b);

    if(a==b)
        printf("Both are equal\n");
    else{
        if(a>b)
            printf("%dis greater\n",a);
        else
            printf("%d is greater\n",b);    
    }    
}