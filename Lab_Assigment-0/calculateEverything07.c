// 7. WAP to calculate summation, subtraction, division, multiplication, reminder operation and average of two integer number.

#include <stdio.h>
int main()
{

    int a, b, c;
    printf("Enter the value of A : ");
    scanf("%d", &a);
    printf("Enter the value of B : ");
    scanf("%d", &b);

    int summation = a + b;
    int subtraction = a - b;
    int division = a / b;
    int multiplication = a * b;
    int reminder = a % b;
    printf("Summation of two number is : %.d\n", summation);
    printf("Subtraction of two number is : %.d\n", subtraction);
    printf("Division of two number is : %.d\n", division);
    printf("Multiolication of two number is : %.d\n", multiplication);
    printf("Reminder of two number is : %.d\n", reminder);
    float AVG = (a + b) / (float)2;
    printf("Average of Three number is : %.2f", AVG);
    return 0;
}