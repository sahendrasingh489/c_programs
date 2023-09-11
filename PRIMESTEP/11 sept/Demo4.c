// program showing the concept of swapping two values without using third variable

#include<stdio.h>
void main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    printf("Before swapping : \na : %d\nb : %d\n",a,b);
       a = a+b;
       b = a-b;
       a = a-b;
    printf("After swapping : \na : %d\nb : %d\n",a,b);
}