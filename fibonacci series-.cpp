#include<stdio.h>
int main()
{
int n;
int f1=0,i=0,f2=1,f3=0;
	printf("Enter the value of n for fibonacci series :");
	scanf("%d",&n);
	printf("%d\t",f1);
	while(i<=n)
	{
	f1=f2;  
	f2=f3;
	f3=f1+f2;
	printf("%d\t",f3);
	i++;
}
}
