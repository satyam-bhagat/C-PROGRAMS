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
printf("Enter the element position\n");
scanf("%d",&pos);
printf("enter the element to be incerted\n");
scanf("%d",&ele);
for(i=n-1;i>=pos-1;i--) 
{
	a[i+1]=a[i];
}
a[pos]=ele;
n++;
printf("the resultant array is \n");
for(i=0;i<n;i++)
{
	printf("%d\n",a[i]);
}
}
