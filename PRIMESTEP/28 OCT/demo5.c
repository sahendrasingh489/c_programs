// program showing the concept of storage class

#include"demo4.c"
void main(){
    extern int a;
    printf("value of a inside main : %d\n",a);
    myFun();
}
