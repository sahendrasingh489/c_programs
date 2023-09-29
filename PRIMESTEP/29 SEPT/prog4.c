/*
    *
   * *
  * * *
 * * * *
* * * * *
*/

#include<stdio.h>
void main(){
    int sp,row,i,j;
    printf("Enter rows : ");
    scanf("%d",&row);

    for(i=row;i>=1;i--){
        for(sp=1;sp<=row-i;sp++){
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
 //             printf("%d ",i);
   //           printf("%d ",j);
     //       printf("%c ",64+j);
     //       printf("%c ",64+i);
        

        }
        printf("\n");
    }
}