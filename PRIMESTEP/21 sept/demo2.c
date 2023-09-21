
// program showing the concept of nested loop
#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=3;i++){
        printf("i : %d\n",i);
        for(j=1;j<=3;j++){
            printf("\tj : %d\n",j);
        }
    }
}