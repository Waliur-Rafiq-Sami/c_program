// 17. WAP to calculate the volume of a rectangle cube.[Formula:Volume = a * b * c]

#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter a : ");
    scanf("%f", &a);
    printf("Enter b : ");
    scanf("%f", &b);
    printf("Enter c : ");
    scanf("%f", &c);
    // Formula:Area = a * b *c
    double rectangleCube = (a * b * c);

    printf("The rectangle Cube is : %.2lf", rectangleCube);

    return 0;
}