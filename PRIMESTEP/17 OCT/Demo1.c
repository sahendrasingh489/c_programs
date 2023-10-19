// program showing the concept of pointer variable

#include<stdio.h>
void main(){
    int a,*ptr;
    printf("Enter value of a : ");
    scanf("%d",&a);

    printf("value of a : %d\n",a);
    printf("address of a : %p\n",&a);

    ptr = &a;
    printf("address of ptr : %p\n",&ptr);
    printf("address which ptr holds : %p\n",ptr);
    printf("value which *ptr holds : %d\n",*ptr);
}
/*
ptr = &a
*ptr = *(ptr) = *(&a) = *1000 = 5
*/