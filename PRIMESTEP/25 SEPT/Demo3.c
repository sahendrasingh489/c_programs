/*
    55555
    4444
    333
    22
    1
*/

#include<stdio.h>
void main(){
    int row,i,j;
    printf("Enter rows : ");
    scanf("%d",&row);

    for(i=row;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}