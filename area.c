#include<stdio.h>
#define pi 3.14
int main()
{
	int radius;
	float area, circumference; 
	printf("enter the radius:");
	scanf("%d", &radius);
	area=pi*radius*radius;
	circumference=2*pi*radius;
	printf("Area of circle:%f\n", area);
	printf("Cicumference of circle:%f\n", circumference);
	return 0;
	
	
}
