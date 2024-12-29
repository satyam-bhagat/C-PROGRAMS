 #include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the value of a and b\n");
	scanf("%d %d",&a,&b);
	c=a&b;
	d=a|b;
	printf("the value after doing (AND)& in a=%d and b=%d is %d\n",a,b,c);
	printf("the value after doing (OR)|| in a=%d and b=%d is %d",a,b,d);
	return 0;
}
	
	
	
