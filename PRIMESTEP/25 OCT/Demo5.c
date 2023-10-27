// program showing the concept of Structure
#include<stdio.h>

struct Employer{
   int age;
   float sal;
   char name[50];
};
struct Employer emp[50]; // here s is a global structure variable
int i,size; // global variable

/* function definition */
void getData(){
  printf("Enter number of employers : ");
  scanf("%d",&size);

  for(i=0;i<size;i++){
    printf("Enter %d employer details\n",i+1);
    printf("Enter Age : ");
    scanf("%d",&emp[i].age);

    printf("Enter Salary : ");
    scanf("%f",&emp[i].sal);
        getchar();
    printf("Enter Name : ");
    scanf("%[^\n]s",&emp[i].name);
  }
}

void displayData(){
    printf("\nEmployers Details\n");
    for(i=0;i<size;i++){
     printf("\nName : %s\n",emp[i].name);
     printf("Age : %d\n",emp[i].age);
     printf("Salary : %.2f\n",emp[i].sal);
    }
}

void main()
{
  getData(); 
  displayData();  
}