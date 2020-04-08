#include <stdio.h>
int main()
{
    int matrix[20][20];
    int i,j,r,c;

    scanf("%d",&r); //Accepts number of rows
    scanf("%d",&c); //Accepts number of columns 

    for(i=0;i< r;i++) //Accepts the matrix elements from the test case data
    {
        for(j=0;j< c;j++)
        {
            scanf("%d",&matrix[i][j]); 
        }
    }
int sum[3];
for(i=0;i< r;i++) 
    { 
  sum[i] =0;
        for(j=0;j< c;j++)
        {
          sum[i] += matrix[i][j];
        }
    }
for(i=0;i< r;i++) 
  printf("%d\n",sum[i]);
}
