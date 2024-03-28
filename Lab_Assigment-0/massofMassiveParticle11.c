// 11. WAP to calculate Mass of the Massive particle(e.g.globe).[Formula:M = g R2 / G]

#include <stdio.h>
int main()
{
    double g, G, R;
    printf("Enter the value of G : ");
    scanf("%lf", &G);
    printf("Enter the value of R : ");
    scanf("%lf", &R);
    printf("Enter the value of g : ");
    scanf("%lf", &g);

    // Formula:M = g R2 / G
    double b = (g * R * R) / G;

    printf("The Fahrenheit value is : %.2lf ", b);
    return 0;
}