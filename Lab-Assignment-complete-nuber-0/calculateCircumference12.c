// 12. WAP to calculate the area of a circumference.[Formula:circumference = 2 *∏* r]

#include <stdio.h>
int main()
{

    float area;
    printf("Enter r : ");
    scanf("%f", &area);

    double circumference = area * 2 * 3.1416;

    printf("The Circumference is : %.2lf", circumference);

    return 0;
}