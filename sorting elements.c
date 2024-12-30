#include<stdio.h>
int main()
{
	int a[10],n,j,i,temp;
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("Enter the elements in the array\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	if(a[i]>a[j])
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
printf("the resultant array is\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);	
}
}
