// program showing the concept of pointer to pointer

#include<stdio.h>
void main(){
    int a,*ptr,**ptr1;
    printf("Enter value of a : ");
    scanf("%d",&a);

    printf("value of a : %d\n",a);
    printf("address of a : %p\n",&a);

    ptr = &a;
    printf("address of ptr : %p\n",&ptr);
    printf("address which ptr holds : %p\n",ptr);
    printf("value which *ptr holds : %d\n",*ptr);
    printf("\n---------------------------------\n");

    ptr1 = &ptr;
    printf("address of ptr1 : %p\n",&ptr1);
    printf("address which ptr1 holds : %p\n",ptr1);
    printf("address which *ptr1 holds : %p\n",*ptr1);
    printf("value which **ptr1 holds : %d\n",**ptr1);

}

/*
    ptr1 = &ptr;
    *ptr1 = *(ptr1) = *(&ptr) = *2000 = 1000 (address)
    **ptr1 = *(*ptr1) = *1000 = 5
*/


