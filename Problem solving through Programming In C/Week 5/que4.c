#include<stdio.h>
int main()
{
int N;
scanf("%d", &N);
int i,j;
for (i=N ; i>0; i--)
{
  for (j=0;j<i;j++)
  {
    printf("*");
  }
  printf("\n");
}
return 0;
}
