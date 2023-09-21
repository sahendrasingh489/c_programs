
// program to print tables of all the numbers between two entered numbers

#include<stdio.h>
void main(){
    int i,num,n,m;
    printf("enter initial and final numbers : ");
    scanf("%d%d",&n,&m);

    for(num=n;num<=m;num++){
        for(i=1;i<=10;i++){
            printf("%d x %d = %d\n",num,i,num*i);
        }
        printf("\n");
    }
}