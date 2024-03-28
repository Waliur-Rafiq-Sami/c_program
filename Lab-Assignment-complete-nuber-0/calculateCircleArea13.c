// 13. WAP to calculate the area of a circle.[Formula:Area =∏* r2]

#include <stdio.h>
int main()
{

    float r;
    printf("Enter r : ");
    scanf("%f", &r);

    double circle = r * r * 3.1416;

    printf("The circle is : %.2lf", circle);

    return 0;
}