#include<stdio.h>
int main()
{
	float r,area,cir;
	printf("enter the value of radius\n");
	scanf("%f",&r);
	area=3.14*r*r;
	cir=2*3.14*r;
	printf("the area of circle is: %f\nthe circumference of the circle is :%f",area,cir);
	return 0;
}
