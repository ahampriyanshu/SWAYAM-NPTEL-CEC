#include <stdio.h>
int main()
{
int base, exponent;
long int result;
scanf("%d", &base); //The base value is taken from test case
scanf("%d", &exponent);  //The exponent value is taken from test case

if(exponent == 0) 
   result = 1;
else
{
result = 1;
while(exponent != 0)
{
result = result * base;
--exponent;
}
}
printf("The result is : %ld\n", result);
return 0;
}
