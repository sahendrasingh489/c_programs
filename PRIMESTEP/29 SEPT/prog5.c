/*
*
**
***
****
*****
****
***
**
*
*/

#include<stdio.h>
void main(){
    int row,i,j;
    printf("Enter rows : ");
    scanf("%d",&row);

    for(i=1;i<=row/2+1;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=row/2;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    
}