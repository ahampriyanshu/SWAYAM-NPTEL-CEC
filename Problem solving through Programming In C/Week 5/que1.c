#include <stdio.h>
int main()
{
    int N; 
    scanf("%d",&N);
int num = 0;
for (int i=1; i<N ; i++)
{
  if ( N%i == 0 )
 { num = num + i; }
    
}
if (num == N)
  printf("\n%d is a perfect number.",N);
else 
  printf("\n%d is not a perfect number.",N);
return 0;
}
