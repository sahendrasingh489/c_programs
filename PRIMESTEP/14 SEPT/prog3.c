// program showing the concept of switch control statement
#include<stdio.h>
void main(){
    int i=1,num=10;
    switch(i++){     // i=1 ---> 2
        case -4 : num--;
        case 0 : num--;
                    break;
        case 1 : ++num; // 11
        case -2 : ++num; // 12
        default : printf("value of num : %d\n",++num);  // 13
                break;
    }
}