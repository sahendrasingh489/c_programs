// program showing the concept of array of pointer

#include<stdio.h>
void main(){
    int i,arr[50],size,*ptr[50];
    printf("Enter size : ");
    scanf("%d",&size);

    printf("Enter array elements : ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
        ptr[i] = &arr[i];
    }

    printf("\nArray elements are : \n");
    for(i=0;i<size;i++){
        printf("%d\t",*ptr[i]);
    }

}