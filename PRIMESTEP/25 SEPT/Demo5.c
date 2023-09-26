/*
    12345678
    7654321
    123456
    54321
    1234
    321
    12
    1
*/

#include<stdio.h>
void main(){
    int row,i,j;
    printf("Enter rows : ");
    scanf("%d",&row);

    for(i=row;i>=1;i--){
        if(i%2==0){
            for(j=1;j<=i;j++){
                printf("%d",j);
            }
            printf("\n");
        }else{
            for(j=i;j>=1;j--){
                printf("%d",j);
            }
            printf("\n");
        }
    }
}