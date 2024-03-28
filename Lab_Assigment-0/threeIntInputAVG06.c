// 6. WAP that will take three integer as input from user and print their average.(You should use type - cast to get proper result)

#include <stdio.h>
int main()
{

    int a, b, c;
    printf("Enter the value of A : ");
    scanf("%d", &a);
    printf("Enter the value of B : ");
    scanf("%d", &b);
    printf("Enter the value of C : ");
    scanf("%d", &c);
    float AVG = (a + b + c) / (float)3;

    printf("Average of Three number is : %.2f", AVG);
    return 0;
}