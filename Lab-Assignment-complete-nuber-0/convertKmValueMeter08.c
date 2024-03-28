// 8. WAP to convert Km value into meter value.[1km = 1000m]

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the Km value : ");
    scanf("%d", &a);
    int b = a * 1000;
    printf("The m value is : %d m", b);
    return 0;
}