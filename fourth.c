#include<stdio.h>
#define ROW 3
#define COL 3
int main (void) {
    int mat[ROW][COL],i,j;
    printf("enter a (%d*%d) :",ROW,COL);
    for(i=0;i<ROW;i++)
    for(j=0;j<COL;j++)
    scanf("%d",&mat[i][j]);
printf("the matrix you entered is\n");
 for(i=0;i<ROW;i++){
    for(j=0;j<COL;j++)
 printf("the matrix is :",mat[i][j]);
 }
printf("\n");
return 0;
}