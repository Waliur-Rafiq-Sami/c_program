// 9. WAP to convert GB value into bit value.

#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter the GB value : ");
    scanf("%u", &a);
    if (a < 0)
    {
        printf("Sorry !! Invalid GB input");
        return 1;
    }

    // 1 GB = 8 * 10 ^ 9 bits;
    unsigned long long b = a * pow(10, 9);
    printf("The bit value is : %llu bit", b);
    return 0;
}