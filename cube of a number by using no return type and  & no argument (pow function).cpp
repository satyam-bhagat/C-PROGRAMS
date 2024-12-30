#include<stdio.h>
#include<math.h>
void cube();


int main()
{
	cube();
}


void cube()
{int n,pw;
	printf("Enter the number\n");
	scanf("%d",&n);
	pw=pow(n,3);
	printf("the cube of number %d is=%d",n,pw);
}



