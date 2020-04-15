#include<stdio.h>
float func(float x);
int main()
{
  int n=10; //Taking n=10 sub intervals
  float a,b,integral; //integral is the integration result
  scanf("%f",&a); // initial limit taken from test case 
  scanf("%f",&b);
int i;
float m,x,total=0;
if(b>a)
  m=(b-a)/n;
else
  m=-(b-a)/n;
  for(i=1;i<n;i++)
  {
    x=a+i*m;
    total=total+func(x);
  }
integral=(m/2)*(func(a)+func(b)+2*total);
printf("The integral is: %0.6f\n",integral);
return 0;
}
float func(float x)
{
  return x*x;
}

