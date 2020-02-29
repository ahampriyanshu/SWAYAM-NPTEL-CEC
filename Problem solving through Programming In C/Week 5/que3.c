#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
for ( int i=1; i<N ; i++)
{
    if (N == (2^i))
    {
    printf("%d is a number that can be expressed as power of 2.",N);
      break;}
  
  if( (2^i) > N)
  {
  printf("%d cannot be expressed as power of 2.",N);
    break;}

}
return 0;
}

