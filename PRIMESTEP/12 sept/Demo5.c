// program showing the concept of if statement 
#include<stdio.h>
void main(){
    int a,b;
    printf("enter values of a and b : ");
    scanf("%d%d",&a,&b);

    if(a>b)
        printf("%d is greater\n",a);
    if(a<b)
        printf("%d is greater\n",b);
    if(a==b)
        printf("Both are equal\n");
}