// 4. WAP to calculate sum of two integer numbers(given by the user) and print it.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of A : ");
    scanf("%d", &a);
    printf("Enter the value of B : ");
    scanf("%d", &b);
    int sum = a + b;
    printf("Sum of two number is : %d", sum);
    return 0;
}