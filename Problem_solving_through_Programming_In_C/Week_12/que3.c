#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; 
    float *element;

    scanf("%d", &n); //Total number of elements

    // Allocate the memory for 'n' number of elements. 
    //Then take the elements as input from test data
// Use the printf statement as:
// printf("Largest element = %.2f\n", *element);
element=(float*) calloc(n,sizeof(float));
if(element==NULL)
{
  printf("Error!!! memory not allocated.");
  exit(0);
}
int i;
for(i=0;i<n;++i)
{
  scanf("%f",element+i);
}
for(i=1;i<n;++i)
{
  if(*element<*(element+i))
    *element=*(element+i);
}
printf("Largest element = %.2f\n", *element);
return 0;
}
