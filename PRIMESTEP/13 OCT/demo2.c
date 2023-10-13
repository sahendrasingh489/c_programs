// program showing the concept of 2d array
#include<stdio.h>
void main(){
    int arr[2][2] = {
        {12,23},
        {34,45}
    };

    printf("arr[0][0] : %d address : %u\n",arr[0][0],&arr[0][0]);
    printf("arr[0][1] : %d address : %u\n",arr[0][1],&arr[0][1]);
    printf("arr[1][0] : %d address : %u\n",arr[1][0],&arr[1][0]);
    printf("arr[1][1] : %d address : %u\n",arr[1][1],&arr[1][1]);
}
