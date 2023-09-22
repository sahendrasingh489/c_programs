/*
floyds triangle
1
23
456
78910

    1 2 3 4 5 6 7 8 9 10 . . . . . .
a = 1  . . . . . a++ . . . . .      
*/
#include<stdio.h>
void main(){
    int i,j,row,a=1;
    printf("enter rows: ");
    scanf("%d",&row);

    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("%d",a++);
        }
        printf("\n");
    }
}