// 37. WAP to input two digits number from user and display with reverse number on screen(Hint : I / P : 32 O / P : 23)

// 35. WAP to input three digits number from user and calculate sum of first and last numbers.(Hint : I / p : 358 O / p : 11)

#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    int reverseNumber = 0, rev;
    int reverseNumberDigit = 0;
    while (number != 0)
    {
        rev = number % 10;
        reverseNumber = reverseNumber * 10 + rev;
        number /= 10;
    }

    printf("The Reverse Number is : %d", reverseNumber);
    return 0;
}