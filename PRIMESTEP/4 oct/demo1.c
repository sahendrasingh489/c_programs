// program showing the concept of recursion
#include<stdio.h>
int fact(int n){
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
void main(){
    int num;
    printf("Enter number : ");
    scanf("%d",&num);

    printf("Factorial : %d\n",fact(num));
}