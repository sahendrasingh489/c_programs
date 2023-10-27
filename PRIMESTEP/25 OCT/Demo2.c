// program showing the concept of Structure

/*
syntax : 
   struct <Structure_name>{
    <datatype> <var1>;
    <datatype> <var2>;
    <datatype> <var3>;
       ....
       ....
   };
   struct <Structure_name> <Structure Variable>;

example : 
   struct Employer{
        int rno;
        double per;
        char str[50];
    };
   struct Employer emp;

   emp.rno;
   emp.per;
   emp.str;
*/
#include<stdio.h>
struct Student{
   int rno;
   float per;
   char name[50];
};
struct Student s;
void main()
{
  printf("Enter Roll Number : ");
  scanf("%d",&s.rno);

  printf("Enter percentage : ");
  scanf("%f",&s.per);
      getchar();
  printf("Enter Name : ");
  scanf("%[^\n]s",&s.name);

  printf("\nName : %s\n",s.name);
  printf("\nRoll Number : %d\n",s.rno);
  printf("\nPercentage : %.2f\n",s.per);
}