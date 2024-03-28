// 25. WAP to interchange values of two numbers using third variable.

#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter a : ");
    scanf("%f", &a);
    printf("Enter a : ");
    scanf("%f", &b);

    float temp;
    temp = a;
    a = b;
    b = temp;

    printf("a =  %.2lf", a);
    printf("\nb = %.2lf", b);

    return 0;
}