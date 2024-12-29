#include<stdio.h>
int main()
{
	float l,b,area,peri;
	printf("enter length and breath  of the rectangle :\n");
	scanf("%f%f",&l,&b);
	area=l*b;
	peri=2*(l+b);
	printf("the area is :%f \nthe perimeter of the rectangle is :%f",area,peri);
	return 0;
}
