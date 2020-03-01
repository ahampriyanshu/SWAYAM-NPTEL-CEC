#include <stdio.h>

int main()
{
    int i, n, largest;
    int arr[100];

    scanf("%d", &n); /*Accepts total number of elements from the test data */

 for(i = 0; i < n; ++i)
    {
       scanf("%d", &arr[i]); /* Accepts the array element from test data */
    }
int big = arr[0];
for ( i = 1 ; i<n ; i++)
{
  if (arr[i] > big )
    big = arr[i];
}
printf("Largest element = %d", big);
}
