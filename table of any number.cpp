#include<stdio.h>
int main()
{   int n,i;
	printf("enter the number \n");
	scanf("%d",&n);
	printf("the table of %d is\n",n);
	for(i=1;i<=10;i++)
	{
		printf("%d\n",n*i);
	}
}
