#include <stdio.h>
 int main()
{
    int N; 
    scanf("%d",&N);
int tmp,cnt;
cnt =0;
tmp =N;
while( tmp > 0 )
{
  cnt++;
  tmp/=10;
}
printf("The number %d contains %d digits.",N,cnt);
return 0;
}
