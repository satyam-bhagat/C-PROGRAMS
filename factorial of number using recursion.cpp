#include<stdio.h>


int fact(int n)

{
int fact1;
	if(n==1)
	{
		return 1;
	}
	else
	{
	int fact1=n*fact(n-1);
	return fact1;
	
}
}
int main()
{
	int n;
printf("Enter the number\n");
scanf("%d",&n);
  int tn=fact(n);
 printf("%d",tn);
}
