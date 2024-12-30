#include<stdio.h>
int main()
{
	int a[10],n,i,pos,ele;//1   0  23  4 0    //
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	n=n-1;
	printf("Enter the elements in the array\n");
	for(i=0;i<=n;i++)
	{
	scanf("%d",&a[i]);
}
printf("enter the element to be incerted\n");
scanf("%d",&ele);
n++;
a[n]=ele;
printf("the elements in the array is after incertion at last is \n");
for(i=0;i<=n;i++)
{
	printf("%d\n",a[i]);
}
}
