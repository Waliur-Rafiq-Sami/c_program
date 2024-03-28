// 26. WAP to interchange values of two numbers without using third variable.

#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter a : ");
    scanf("%f", &a);
    printf("Enter a : ");
    scanf("%f", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a =  %.2lf", a);
    printf("\nb = %.2lf", b);

    return 0;
}