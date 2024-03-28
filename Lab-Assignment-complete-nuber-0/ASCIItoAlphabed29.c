// 29. WAP to input any ASCII number and display appropriate character on screen.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);

    printf("%d ASCII value is : %c", a, a);

    return 0;
}