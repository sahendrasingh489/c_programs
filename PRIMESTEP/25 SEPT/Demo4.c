/*
    AAAAA
    BBBB
    CCC
    DD
    E
*/

#include<stdio.h>
void main(){
    int row,i,j,x=1;
    printf("Enter rows : ");
    scanf("%d",&row);

    for(i=row;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%c",64+x);
        }
        x++;
        printf("\n");
    }
}