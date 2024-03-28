// 20. WAP to calculate the area of a triangle.[Formula:Area = 1 / 2 * base * height]

#include <stdio.h>
int main()
{
    float base, hight;
    printf("Enter base : ");
    scanf("%f", &base);
    printf("Enter hight : ");
    scanf("%f", &hight);

    // Formula:Area = a * a *a
    double Area = 1.0 / 2.0 * (base * hight);

    printf("The Area  is : %.2lf", Area);

    return 0;
}