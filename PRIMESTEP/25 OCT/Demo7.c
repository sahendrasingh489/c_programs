// program showing the concept of union
#include<stdio.h>
union Student{
   int rno;
   float per;
   char name[50];
};
union Student s;
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