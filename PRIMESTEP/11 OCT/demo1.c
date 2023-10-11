// program to insert an element at specific position

#include<stdio.h>
void main(){
    int value,index,arr[50],size,i;
    printf("enter size of array : ");
    scanf("%d",&size);

    printf("enter array elements : ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("\nArray elements are : \n");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }

    printf("\nEnter index and value : \n");
    scanf("%d%d",&index,&value);

    for(i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index] = value;
    printf("\nArray after insertion : \n");
    for(i=0;i<=size;i++){
        printf("%d\t",arr[i]);
    }

}







