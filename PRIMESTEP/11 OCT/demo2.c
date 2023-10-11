// program to merge two array
/*
    arr1 : 
    0   1   2   3   4 (indexing)
    ------------------ 
    11  22  33  44  55 (value)

    arr2 : 
    0   1   2  (indexing)
    ----------- 
    11  22  33 (value)

    After merging : 
    0   1   2   3   4   5   6   7 (indexing)
    ---------------------------------------
    11  22  33  44  55  11  22  33 (value)
*/

#include<stdio.h>
void main(){
    int arr1[50],arr2[50],size1,size2,i;
    printf("enter size of first array : ");
    scanf("%d",&size1);

    printf("enter size of second array : ");
    scanf("%d",&size2);

    printf("enter first array elements : ");
    for(i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }

    printf("enter second array elements : ");
    for(i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }

    for(i=0;i<size2;i++,size1++){
        arr1[size1] = arr2[i];
    }

    printf("\nArray elements after merging : \n");
    for(i=0;i<size1;i++){
        printf("%d\t",arr1[i]);
    }


}







