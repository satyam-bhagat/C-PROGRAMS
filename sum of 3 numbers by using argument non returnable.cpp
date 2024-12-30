#include <stdio.h>

void sum(int a, int b, int c) {
    int result = a + b + c;
    printf("The sum of the three numbers is: %d\n", result);
}

int main() {
    int num1, num2, num3;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    sum(num1, num2, num3);

    return 0;
}
