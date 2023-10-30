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
      ptr = fopen("demo.txt","r");

    if(ptr==NULL){
        printf("Error while dealing with a file");
        exit(0);
    }
    fscanf(ptr,"%d",&rno);
    fscanf(ptr,"%f",&per);
    fscanf(ptr," %[^\n]s",str);
    printf("\nRoll Number : %d\n",rno);
    printf("\nPercentage : %.2f\n",per);
    printf("\nName : %s\n",str);
    // closing a file
    fclose(ptr);
}


/*
fwrite(&emp,sizeof(struct Student),1,ptr);
fread(&emp,sizeof(struct Student),1,ptr);
*/