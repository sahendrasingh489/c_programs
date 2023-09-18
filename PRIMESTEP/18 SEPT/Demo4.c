// program showing the concept of for loop

#include<stdio.h>
void main(){
int t,i,num;
printf("Enter number : ");
scanf("%d",&num);

    for(i=1;i<=10;i++)
    {
        t = num*i;
        printf("%d x %d = %d\n",num,i,t);
    }
}