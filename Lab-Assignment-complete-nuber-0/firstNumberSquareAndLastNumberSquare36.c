// 36. WAP to input three digits number from user and display square of first and last numbers.(Hint : I / p : 358 O / p : Square of 3 is 9 and Square of 8 is 64)

#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%llu", &number);

    int lastNumber = number % 10;
    int first = 0;
    int firstDigit = 0;
    while (number != 0)
    {
        first = number % 10;
        number /= 10;
    }

    printf("Fist Number Squer is : %d\n", first * first);
    printf("Last Number Squer is : %d", lastNumber * lastNumber);
    return 0;
}