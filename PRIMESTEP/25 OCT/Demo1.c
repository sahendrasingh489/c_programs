// program showing the concept of String handling functions

#include<stdio.h>
#include<string.h>
void main(){
    char str1[]="ANDREW";
    char str2[]="mathew";
    char str3[50];
    char str4[]="Simon";
    char str5[]="A";
    char str6[]="A";

    printf("Length : %d\n",strlen(str1));
    printf("Uppercase : %s\n",strupr(str2));
    printf("Lowercase : %s\n",strlwr(str1));
    printf("Reverse : %s\n",strrev(str1));
    printf("Copy : %s\n",strcpy(str3,str1));
    printf("Compare : %d\n",strcmp(str5,str6));
    printf("Concat : %s\n",strcat(str5,str6));

}