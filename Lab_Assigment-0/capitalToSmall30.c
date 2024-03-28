// 30. WAP to input any Capital letter and display it with small letter.

#include <stdio.h>
int main()
{
    char a;
    printf("Enter a Character : ");
    scanf("%c", &a);
    if (a > 97 && a < 122)
    {
        printf("Sorry !! Enter a capital letter letter");
        return 1;
    }

    printf("'%c' convert capital letter : %c", a, a - 32);

    return 0;
}