#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter the value of a and b\n");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("the value of a is %d \n the value of b is %d",a,b);
	return 0;
}
