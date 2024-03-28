// 19. WAP to calculate the volume of a cube.[Formula:volume = a3]

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