// program showing the concept of pointer to an array

#include<stdio.h>
void main(){
    int i,arr[50],size,*ptr;
    printf("Enter size : ");
    scanf("%d",&size);

    printf("Enter array elements : ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    ptr = arr; // &arr[0]

    printf("\nArray elements are : \n");
    for(i=0;i<size;i++){
        printf("%d\t",*ptr);
        ptr++;
    }

}