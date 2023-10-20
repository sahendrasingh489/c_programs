// program showing the concept of string
#include<stdio.h>
void main(){
    char str[]={'H','e','l','l','o','\0'};
    /*
        printf("str[%d] : %c\n",0,str[0]);
        printf("str[%d] : %c\n",1,str[1]);
        printf("str[%d] : %c\n",2,str[2]);
        printf("str[%d] : %c\n",3,str[3]);
        printf("str[%d] : %c\n",4,str[4]);
        printf("str[%d] : %c\n",5,str[5]);
    */
    for(int i=0;i<6;i++)
        printf("str[%d] : %c\n",0,str[i]);
}

