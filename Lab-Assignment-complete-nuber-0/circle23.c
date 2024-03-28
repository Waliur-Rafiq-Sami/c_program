// 23. WAP to calculate the area of a circle.[Formula:Area =∏* r2]

#include <stdio.h>
int main()
{
    float r;
    printf("Enter a : ");
    scanf("%f", &r);

    // Formula:Area = a * a *a
    double circle = 3.1416 * r * r;

    printf("The circle  is : %.2lf", circle);

    return 0;
}