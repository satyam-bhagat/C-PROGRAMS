#include<stdio.h>
int fibo(int n)
{
	if(n<=1)
	{
		return n; 01123
	}
	else
	{
	
       return fibo(n-1)+fibo(n-2);
	
	}
}
int main()
{
	int n1,i;
	printf("Enter the number\n");
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	printf("%d",fibo(i));
}

