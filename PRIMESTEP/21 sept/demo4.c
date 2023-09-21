
// program showing the concept of continue statement
#include<stdio.h>
void main(){
    int i,j;
    for(i=1;i<=3;i++){
        printf("i : %d\n",i);
        for(j=1;j<=3;j++){
            if(i==2 && j==2)
                continue;
            printf("\tj : %d\n",j);
        }
    }
}