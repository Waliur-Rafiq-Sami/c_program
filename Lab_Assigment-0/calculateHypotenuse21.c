// 21. WAP to calculate the hypotenuse of a right - angle.[Formula:height2 + base2 = hypotenuse2]

#include <stdio.h>
int main()
{
    float a;
    printf("Enter a : ");
    scanf("%f", &a);

    // Formula:Area = a * a *a
    double cube = (a * a * a);

    printf("The cube  is : %.2lf", cube);

    return 0;
}