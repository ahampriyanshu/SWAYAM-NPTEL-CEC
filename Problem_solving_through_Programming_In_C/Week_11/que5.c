#include<stdio.h>
float func(float x,float y);
int main()
{
    float xn;
   //printf("Enter xn:"); 
    scanf("%f",&xn);
float x0=0.3,y0=2,m1,m2,m3,m4,m,y,h=0.2;
while(x0<xn)
{
  m1=func(x0,y0);
  m2=func((x0+h/2.0),(y0+m1*h/2.0));
  m3=func((x0+h/2.0),(y0+m2*h/2.0));
  m4=func((x0+h),(y0+m3*h)); m=((m1+2*m2+2*m3+m4)/6);
  y0=y0+m*h;
  x0=x0+h;
}
y=y0;
printf("y=%f\n",y0);  // Final output
return 0;
}
float func(float x,float y)
{
  float m;
  m=(x*(2*x+1)-3*y*y)/10;
  return m;
}
