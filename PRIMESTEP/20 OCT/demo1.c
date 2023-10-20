// program to print reverse of an array
#include<stdio.h>
void main(){
    int temp,arr[50],i,size;

    printf("Enter Size of array :");
    scanf("%d",&size);

    printf("Enter array elements :");
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);

    printf("array elements are :");
    for(i=0; i<size; i++)
        printf("%d\t",arr[i]);
    
    for(i=0; i<size/2; i++){
        temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
    printf("\narray elements are :\n");
    for(i=0; i<size; i++)
        printf("%d\t",arr[i]);
}