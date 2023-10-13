// program showing the concept of 2d array
#include<stdio.h>
void main(){
    int i,j,arr[2][2] = {
        {12,23},
        {34,45}
    };

    printf("\nArray elements are : \n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
