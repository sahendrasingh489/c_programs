// program to print reverse of an array using pointer
#include<stdio.h>
void main(){
    int temp,arr[50],i,size,*ptr;

    printf("Enter Size of array :");
    scanf("%d",&size);

    printf("Enter array elements :");
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);

    printf("array elements are :");
    for(i=0; i<size; i++)
        printf("%d\t",arr[i]);
    
    ptr = arr;

    for(i=0; i<size/2; i++){
        temp = *(ptr+i);
        *(ptr+i) = *(ptr+size-1-i);
        *(ptr+size-1-i) = temp;
    }
    printf("\narray elements are :\n");
    for(i=0; i<size; i++)
        printf("%d\t",*(ptr+i));
}