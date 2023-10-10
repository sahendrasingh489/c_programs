// program showing the concept of reversing individual elements of an array

#include<stdio.h>
void main(){
    int rev,rem,temp,i,arr[50],size;
    printf("enter size of array : ");
    scanf("%d",&size);

    printf("enter array elements : ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("\narray elements are : ");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }

    printf("\nAfter reversing : \n");
    for(i=0;i<size;i++){
        temp = arr[i];
        rev=0;
        while(temp>0){
            rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
        arr[i]=rev;
    }

    printf("\narray elements after reversing : ");
    for(i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}