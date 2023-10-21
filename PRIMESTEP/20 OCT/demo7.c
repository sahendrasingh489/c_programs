// program to compare two strings
#include<stdio.h>
void comparingstrings(char str1[],char str2[]){
    int i,len1=0,len2=0,flag=1;
    while(str1[len1]!='\0'){
        len1++;
    }
    while(str2[len2]!='\0'){
        len2++;
    }
    if(len1!=len2)
        printf("password does not matched\n");
    else{
        for(i=0;i<len1;i++){
            if(str1[i]!=str2[i]){
                flag=0;
                printf("password doesnot matched");
                break;
            }
        }
        if(flag)
            printf("password matched\n");
    }    
}
void main(){
    char str1[50],str2[50];
    printf("Enter password and confirm password : ");
    scanf("%s %s",str1,str2);
    comparingstrings(str1,str2);
}

