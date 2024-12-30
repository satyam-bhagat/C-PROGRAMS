#include<stdio.h>
int main()
{
	int a[10],min,n,i;
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("Enter the elements in the array\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)  //checks onr one element and displays //the smallest of all//
{
	
if(a[i]<min)
{
	min=a[i];
}
}
printf("the smallest of all elementts is %d",min);
}
