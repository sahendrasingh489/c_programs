// program showing the concept of macro
#include<stdio.h>
void main()
{
    printf("Line : %d\n",__LINE__);
    printf("File : %s\n",__FILE__);
    printf("Date : %s\n",__DATE__);
    printf("Time : %s\n",__TIME__);
}
