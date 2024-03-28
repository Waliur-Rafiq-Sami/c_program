// 18. WAP to calculate the area of a square.[Formula:Area = a^2]

#include <stdio.h>
int main()
{
    float a;
    printf("Enter a : ");
    scanf("%f", &a);

    // Formula:Area = a * b *c
    double square = (a * a);

    printf("The square is : %.2lf", square);

    return 0;
}