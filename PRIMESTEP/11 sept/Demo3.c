// program showing the concept of swapping two values using third variable

#include<stdio.h>
void main(){
    int a,b,temp;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    printf("Before swapping : \na : %d\nb : %d\n",a,b);
        temp=a;
        a=b;
        b=temp;
    printf("After swapping : \na : %d\nb : %d\n",a,b);
}