/*
1
12
123
1234
12345
*/
#include<stdio.h>
void main(){
    int i,j,row;
    printf("enter rows: ");
    scanf("%d",&row);

    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}