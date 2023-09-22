/*
A      65               64+1 
AB     65 66            64+1 64+2
ABC    65 66 67         64+1 64+2 64+3 
ABCD   65 66 67 68      64+1 64+2 64+3 64+4
ABCDE  65 66 67 68 69   64+1 64+2 64+3 64+4 64+5
*/
#include<stdio.h>
void main(){
    int i,j,row;
    printf("enter rows: ");
    scanf("%d",&row);

    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("%c",64+j);
        }
        printf("\n");
    }
}