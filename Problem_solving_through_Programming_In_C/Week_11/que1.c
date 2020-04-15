#include<stdio.h>
int main()
{
  float t[100]={10,15,18,22,30}, v[100]={22,26,35,48,68};
  float a; //Value of the t to find the respective value of v(t)
  scanf("%f", &a); int i,j;
float x,y,k=0;
for(i=0; i<5; i++)
{
  x=1,y=1;
  for(j=0; j<5; j++)
  {
    if(j!=i)
    {
      x=x*(a-t[j]);
      y=y*(t[i]-t[j]);
    }
  }
  k=k+((x/y)*v[i]);
}
printf("The respective value of the variable v is: %.2f\n", k);
  return 0;
}

