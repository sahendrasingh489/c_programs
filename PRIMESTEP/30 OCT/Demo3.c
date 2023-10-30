// program showing the concept of file handling

#include<stdio.h>
#include<stdlib.h>
void main(){
    // creating a file pointer
    FILE *ptr;
    char str[200];
    // opening or creating a file by fopen function
    // here w is a mode
      ptr = fopen("demo.txt","r");

    if(ptr==NULL){
        printf("Error while dealing with a file");
        exit(0);
    }
    fscanf(ptr,"%[^\n]s",str);
    printf("Data : %s\n",str);
    // closing a file
    fclose(ptr);
}
