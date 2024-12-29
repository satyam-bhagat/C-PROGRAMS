 #include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a and b\n");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the value of a is %d \nthe value of b is %d",a,b);
	return 0;
}
