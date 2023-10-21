// program to convert string from lowercase to uppercase
#include<stdio.h>
void getUpperCase(char str[]){
    int i,len=0;
    while(str[len]!='\0'){
        len++;
    }
    for(i=0;i<len;i++){
        if(str[i]>=97 && str[i]<=122)
            str[i]-=32;
    }
    printf("\nstring in uppercase : %s\n",str);
}
void main(){
    char str[50];
    printf("Enter string in lowercase : ");
    scanf("%s",str);
    getUpperCase(str);
}

