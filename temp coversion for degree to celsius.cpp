#include<stdio.h>
int main()
{
    float cel, fah;
    
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &cel);
    fah = (cel * 9 / 5) + 32;
    printf("The temperature in Fahrenheit is: %.2f\n", fah);

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fah);
    cel = (fah - 32) * 5 / 9;
    printf("The temperature in Celsius is: %.2f\n", cel);

    return 0;
}

