// 10. WAP to convert Celsius value into Fahrenheit value.(Formula : F = (9c/5) + 32)

#include <stdio.h>
int main()
{
    float a;
    printf("Enter the Celsius value : ");
    scanf("%f", &a);

    // Formula : F = (9c/5) + 32;
    float b = ((9.0 * a) / 5.0) + 32;

    printf("The Fahrenheit value is : %.2f F", b);
    return 0;
}