// 24. WAP to calculate the initial velocity of a moving particle.[hint : v = u + a * t...]

#include <stdio.h>
int main()
{
    float u, a, t;
    printf("Enter u : ");
    scanf("%f", &u);
    printf("Enter a : ");
    scanf("%f", &a);
    printf("Enter t : ");
    scanf("%f", &t);

    //[hint : v = u + a * t...]
    double v = u + a * t;

    printf("The v  is : %.2lf", v);

    return 0;
}