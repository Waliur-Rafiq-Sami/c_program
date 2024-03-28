// 16. WAP to calculate the area of a rectangle.[Formula:Area = a * b]

#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter a : ");
    scanf("%f", &a);
    printf("Enter b : ");
    scanf("%f", &b);
    // Formula:Area = a * b
    double rectangle = (a * b);

    printf("The rectangle is : %.2lf", rectangle);

    return 0;
}