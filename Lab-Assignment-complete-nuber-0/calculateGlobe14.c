// 14. WAP to calculate the volume of a Globe.[Formula:Volume = 4 / 3 *∏* r3]

#include <stdio.h>
int main()
{

    float r;
    printf("Enter r : ");
    scanf("%f", &r);

    double Globe = (4.0 / 3.0) * 3.1416 * r * r * r;

    printf("The Globe is : %.2lf", Globe);

    return 0;
}