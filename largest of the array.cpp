#include<stdio.h>
int main()
{
	int a[10],max=0,n,i;
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("Enter the elements in the array\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)  //checks one one element and displays //the greatest of all//
{
	
if(a[i]>max)
{
	max=a[i];
}
}
printf("the greatest of all the elements incerted is %d",max);

return 0;
}
