// program showing the concept of 2d array
#include<stdio.h>
void main(){
    int i,j,r,c,arr[20][20];

    printf("Enter rows and columns : ");
    scanf("%d%d",&r,&c);

    printf("\nEnter Array elements : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nArray elements are : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
