
#include<stdio.h>
int main()
{
	int a,i,fact;
	printf("Enter the number for factorial\n");
	scanf("%d",&a);
	for(i=a;i>=1;i--)
	{
	fact=fact*i;
	printf("%d*",i);
	}
	printf("=%d",fact);
}
