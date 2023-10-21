// program to merge two string
#include<stdio.h>
void getMergedString(char str1[],char str2[]){
    int i,len1=0,len2=0;
    while(str1[len1]!='\0'){
        len1++;
    }
    while(str2[len2]!='\0'){
        len2++;
    }
    str1[len1]=' ';
    len1++;
    for(i=0;i<len2;i++){
       str1[len1]=str2[i];
       len1++;
    }
    str1[len1]='\0';
    printf("\nmerged string : %s\n",str1);
}
void main(){
    char str1[50],str2[50];
    printf("Enter two strings : ");
    scanf("%s %s",str1,str2);
    getMergedString(str1,str2);
}

