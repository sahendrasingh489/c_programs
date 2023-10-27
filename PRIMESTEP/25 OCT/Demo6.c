// program showing the concept of Structure
#include<stdio.h>
/*
integer = int
character = char 
Student = stud
*/

typedef struct Student{
   int rno;
   float per;
   char name[50];
}stud; 

/* function definition */
void getData(stud *s){
  printf("Enter Roll Number : ");
  scanf("%d",&s->rno);

  printf("Enter percentage : ");
  scanf("%f",&s->per);
      getchar();
  printf("Enter Name : ");
  scanf("%[^\n]s",&s->name);
}

void displayData(stud s){
     printf("\nName : %s\n",s.name);
     printf("\nRoll Number : %d\n",s.rno);
     printf("\nPercentage : %.2f\n",s.per);
}

void main()
{
  stud s;  
  getData(&s); 
  displayData(s);  
}