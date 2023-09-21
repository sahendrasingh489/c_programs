
// program to check whether entered number is armstrong or not
#include<stdio.h>
#include<math.h>
void main(){
    int num,sum=0,count=0,rem,temp1,temp2;
    printf("enter number : ");
    scanf("%d",&num);

    temp1=num;
    temp2=num;

    while(num>0){
        num = num/10;
        count++;
    }

    while(temp1>0){
        rem=temp1%10;
        sum=sum+pow(rem,count);
        temp1 = temp1/10;
    }

    if(temp2==sum)
        printf("Armstrong Number\n");
    else
        printf("No. is not armstrong");    
}