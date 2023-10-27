// program showing the concept of macro
#include<stdio.h>
#define square(num) num*num // function like macro
void main()
{
    printf("Result : %d\n",36/square(6));
}

/*
36/square(6)
36/num*num
36/6*6
(36/6)*6
6*6
36
*/