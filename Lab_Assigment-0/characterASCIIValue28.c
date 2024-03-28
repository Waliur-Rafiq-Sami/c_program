// 28. WAP to accept any character from user and display its ASCII number on screen.

#include <stdio.h>
int main()
{
    char a;
    printf("Enter a Character : ");
    scanf("%c", &a);

    printf("%c ASCII value is : %d", a, a);

    return 0;
}