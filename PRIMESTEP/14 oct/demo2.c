// program showing the concept of 2d array
#include<stdio.h>
void main(){
    int i,j,r,c,arr1[20][20],arr2[20][20];

    printf("Enter rows and columns : ");
    scanf("%d%d",&r,&c);

    printf("\nEnter first Array elements : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nEnter second Array elements : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    printf("\nFirst Array elements are : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",arr1[i][j]);       
        }
        printf("\n");
    }
    printf("\nSecond Array elements are : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",arr2[i][j]);       
        }
        printf("\n");
    }

    printf("\nResultant Array : \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",arr1[i][j]+arr2[i][j]);       
        }
        printf("\n");
    }

}
