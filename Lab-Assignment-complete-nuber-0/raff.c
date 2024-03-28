#include <stdio.h>

int main()
{
    int dividend, divisor, quotient = 0, remainder;

    // Input the two numbers
    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // Calculate quotient and remainder
    while (dividend >= divisor)
    {
        dividend -= divisor;
        quotient++;
    }
    remainder = dividend;

    // Print the result
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
