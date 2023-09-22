/*
    1
    12
    1 3
    1  4
    12345
*/
#include<stdio.h>
void main(){
    int i,j,row;
    printf("enter rows: ");
    scanf("%d",&row);

    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            if(j==1 || i==j || i==row)
                printf("%d",j);
            else
                printf(" ");    
        }
        printf("\n");
    }
}