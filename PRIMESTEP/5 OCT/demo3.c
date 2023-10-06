// program showing the concept of array

#include<stdio.h>
void main(){
    int size,i,arr[50];
    printf("Enter size of array : ");
    scanf("%d",&size);

    printf("\nEnter array elements : \n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nArray elements are : \n");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nsum : %d\n",arr[0]+arr[size-1]);
}

