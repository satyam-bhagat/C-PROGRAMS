#include<stdio.h>
int main()
{
	int a[10],n,i,pos,ele;//1   0  23  4 0    //
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("Enter the elements in the array\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
}
printf("enter the element to be incerted\n");
scanf("%d",&ele);
for(i=n;i>=0;i--)
{
	a[i+1]=a[i];
}
a[0]=ele;
printf("the elements in the array is after incertion at begining is \n");
for(i=0;i<=n;i++)
{
	printf("%d\n",a[i]);
}
return 0;
}
