// program

#include<stdio.h>
void main()
{
    int rno=123; 
    float per=56.67;
    char ch='a';

    printf("roll number : %d\n",rno);
    printf("percentage : %.1f\n",per);
    printf("percentage : %.2f\n",per);
    printf("percentage : %.3f\n",per);
    printf("percentage : %.4f\n",per);
    printf("percentage : %.10f\n",per);
    printf("character : %c\n",ch);
    
}

/*
 Format specifier
 ----------------
 %d = int
 %f = float
 %c = character
 %lf = double
 %Lf = long double
%i = short
%u = unsigned short int
%lu = unsigned long int
%ld = long
%p = address in hexadecimal system
*/