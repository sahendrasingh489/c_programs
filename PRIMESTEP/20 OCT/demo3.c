// program to pass array from function
#include<stdio.h>
// global declartion of variable
int i,size,temp;
// function definition
int* getReverseArray(int arr[]){
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
    return arr;
}
void main(){
    int arr[50],*ptr=getReverseArray(arr); // function calling
    printf("\narray elements are :\n");
    for(i=0; i<size; i++)
        printf("%d\t",*(ptr+i));
}

/*
FIXED LENGTH STRING
 char str[10]
   0    1   2   3   4   5   6   7   8   9
 -----------------------------------------
 | R | A | M | A |   |   |   |   |   |   |
 -----------------------------------------

VARIABLE LENGTH STRING
 A) LENGTH CONTROL STRING
 char str[5]
   0    1   2   3   4 
 ---------------------
 | 5 | R | A | M | A |
 ---------------------
 
 B) DELIMITED STRING
   0    1   2   3   4   5   6   7 
   ----------------------------------
   | R | A | M | A | Y | A | N | \0 |
  -----------------------------------
*/