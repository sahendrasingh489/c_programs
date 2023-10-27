// program showing the concept of Structure
#include<stdio.h>
struct Student{
   int rno;
   float per;
   char name[50];
};
struct Student s; // here s is a global structure variable
/* function definition */
void displayData(){
     printf("\nName : %s\n",s.name);
     printf("\nRoll Number : %d\n",s.rno);
     printf("\nPercentage : %.2f\n",s.per);
}
void main()
{
  printf("Enter Roll Number : ");
  scanf("%d",&s.rno);

  printf("Enter percentage : ");
  scanf("%f",&s.per);
      getchar();
  printf("Enter Name : ");
  scanf("%[^\n]s",&s.name);

  displayData();  
 }