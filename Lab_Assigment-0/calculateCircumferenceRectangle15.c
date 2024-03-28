// 15. WAP to calculate the circumference of a rectangle.[Formula:Area = 2 * (a + b)]

#include <stdio.h>
int main()
{

    float a, b;
    printf("Enter a : ");
    scanf("%f", &a);
    printf("Enter b : ");
    scanf("%f", &b);
    // Formula:Area = 2 * (a + b)
    double rectangle = (a + b) * 2.0;

    printf("The rectangle is : %.2lf", rectangle);

    return 0;
}