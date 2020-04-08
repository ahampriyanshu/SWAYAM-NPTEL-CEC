#include<stdio.h>
int main() {
int array[30], num, i, pos;  
/*num is number of elements in the array and loc is the position of the array to be deleted. 
starting from arr[0] as the first(1) position and so on. */

   scanf("%d", &num); /*Accepts the size of array from test case data */
 
   for (i = 0; i < num; i++) {
      scanf("%d", &array[i]);  /* Read the array elements from the test case data */
   }
 
   scanf("%d", &pos); /* Accepts the Position of the element to be deleted */
num--;
for (i = pos -1; i < num; i++) 
{
  array[i] = array[i + 1];
  
           
       }
for (i = 0; i < num; i++)
      printf("%d\n", array[i]);
 
   return (0);
}
