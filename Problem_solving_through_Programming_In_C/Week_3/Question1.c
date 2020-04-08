#include <stdio.h>
#define PI 3.14
void main()
{
    int radius;
    float area;
    scanf("%d", &radius);
	area = radius * radius * PI;
	printf("Area of a circle = %5.2f\n", area);
}
