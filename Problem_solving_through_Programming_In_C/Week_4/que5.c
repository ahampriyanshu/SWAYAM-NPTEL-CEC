#include <stdio.h>
int main()
{

int N, First_digit, Last_digit;

scanf("%d", &N); //The number is accepted from the test case
Last_digit = N%10;
First_digit = N;

while(First_digit >=10)
{
    First_digit = First_digit/10;
}


printf("Sum of First and Last digit = %d", First_digit + Last_digit);

return 0;
}
