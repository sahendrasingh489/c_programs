// program showing the concept of multidimensional array
#include<stdio.h>
void main(){
    int i,j,k,num,r,c,arr[2][3][3];

    printf("Enter no. of 2d matrix : ");
    scanf("%d",&num);

    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    printf("\nEnter Array elements : \n");
    for(i=0;i<num;i++){
        printf("\nenter %d matrix elements\n",i+1);
        for(j=0;j<r;j++){
            for(k=0;k<c;k++){
                scanf("%d",&arr[i][j][k]);
            }
        }
    }

printf("\nArray elements are : \n");
    for(i=0;i<num;i++){
        for(j=0;j<r;j++){
            for(k=0;k<c;k++){
                printf("%d\t",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
