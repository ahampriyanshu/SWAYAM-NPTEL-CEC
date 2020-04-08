#include <stdio.h>
int main()
{
   int x, y, GCD; 
   scanf("%d %d", &x, &y); //Two numbers x and y are taken from the test cases
   //You can use any other variable as required 
   //The last part is already written 

for ( int i =1 ; i <= x && i <= y; ++i)
{  if( x%i == 0 && y%i == 0 )
  GCD = i;
} 
printf("GCD of the numbers %d and %d is %d", x, y,GCD);

	 return 0;
}
