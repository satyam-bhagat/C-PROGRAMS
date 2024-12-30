#include<stdio.h>
int main()
{
	int a[10],n,t,i,flag=0;
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("Enter the elements in the array\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
}
	printf("Enter the target value\n");
	scanf("%d",&t);
for(i=0;i<n;i++)
{
	if(a[i]==t)
	{
		flag=1;
		printf("the element is at position %d ",i+1);
		break;
	}
}

if(flag==0)
	{
		printf("element not found\n");
	}
}


