// program showing the concept of enum
#include<stdio.h>
enum week_days{sun=100,mon,tue=-345,wed,thur=200,fri,sat=105};
void main()
{
    int i;
    enum week_days day = thur;
    for(i=sun;i<=sat;i++){
        printf("%d\t",i);
    }
    printf("\nday : %d\n",day);
}
