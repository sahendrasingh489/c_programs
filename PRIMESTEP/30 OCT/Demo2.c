// program showing the concept of file handling

#include<stdio.h>
#include<stdlib.h>
void main(){
    // creating a file pointer
    FILE *ptr;
    char str[200];
    // opening or creating a file by fopen function
    // here w is a mode
//    ptr = fopen("demo.txt","w");
      ptr = fopen("demo.txt","a");

    printf("Enter content : ");
    gets(str);

    if(ptr==NULL){
        printf("Error while dealing with a file");
        exit(0);
    }
    printf("File created successfully");
    fprintf(ptr,"%s",str);
    printf("Data inserted successfully");
    // closing a file
    fclose(ptr);
}
