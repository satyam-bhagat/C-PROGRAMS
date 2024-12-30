#include<stdio.h>
void swap(int a,int b);
 main()
{int p,q;
printf("Enter the value of a and b\n");
scanf("%d%d",&p,&q);
swap(p,q);	
}


void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("the two numbers after swapping by using call by value is a=%d b=%d",a,b);
}
