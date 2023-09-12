// program showing the concept of if else statement 
#include<stdio.h>
void main(){
    int sal,exp;
    printf("enter salary and experience : ");
    scanf("%d%d",&sal,&exp);

    if(sal>=10000 && exp>=5)
        printf("Eligible to get hike\n");
    else
        printf("Not eligible to get hike\n");
}