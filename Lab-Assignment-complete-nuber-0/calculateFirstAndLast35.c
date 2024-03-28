// 35. WAP to input three digits number from user and calculate sum of first and last numbers.(Hint : I / p : 358 O / p : 11)

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

    printf("The sum of First and Last Number is : %d", first + lastNumber);
    return 0;
}