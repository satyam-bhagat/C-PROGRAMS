#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    
    printf("The value after pre-incrementing (++a) is: %d\n", ++a);//first increment and then print
    printf("The value after post-incrementing (a++) is: %d\n", a++);//first print and then increment
    printf("After incrementing, the value is: %d\n", a);
    
    printf("The value after pre-decrementing (--a) is: %d\n", --a);//first decrement then print
    printf("The value after post-decrementing (a--) is: %d\n", a--);//first print then decrement
    printf("After decrementing, the value is: %d\n", a);
    
    return 0;
}

