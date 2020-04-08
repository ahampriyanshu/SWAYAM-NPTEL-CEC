#include <stdio.h>
int main()
{
   int x, y, GCD; 
   scanf("%d %d", &x, &y); //Two numbers x and y are taken from the test cases
   //You can use any other variable as required 
   //The last part is already written 


int z;
   if (x<y)
     z=x;
    else 
      z=y;
  
        for(GCD = z; GCD >= 1; GCD--) 
    {
        // GCD is the greatest number that divides both the numbers
        if(x%GCD == 0 && y%GCD == 0) 
            break;  // exits the loop
    }
printf("GCD of the numbers %d and %d is %d", x, y,GCD);

	 return 0;
}
