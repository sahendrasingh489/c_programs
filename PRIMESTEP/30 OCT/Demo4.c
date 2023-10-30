// program showing the concept of file handling

#include<stdio.h>
#include<stdlib.h>
void main(){
    // creating a file pointer
    FILE *ptr;
    int rno;
    float per;
    char str[200];
    // opening or creating a file by fopen function
    // here w is a mode
    ptr = fopen("demo.txt","w");

    printf("Enter roll number : ");
    scanf("%d",&rno);

    printf("Enter percentage : ");
    scanf("%f",&per);
    getchar();
    printf("Enter content : ");
    gets(str);

    if(ptr==NULL){
        printf("Error while dealing with a file");
        exit(0);
    }
    printf("File created successfully");
    fprintf(ptr,"%d\n",rno);
    fprintf(ptr,"%f\n",per);
    fprintf(ptr,"%s",str);
    printf("\nData inserted successfully");
    // closing a file
    fclose(ptr);
}
