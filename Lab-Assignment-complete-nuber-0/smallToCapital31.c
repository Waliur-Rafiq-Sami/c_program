// 31. WAP to input any Small letter and display it with capital letter.

#include <stdio.h>
int main()
{
    char a;
    printf("Enter a Character : ");
    scanf("%c", &a);
    if (a > 65 && a < 90)
    {
        printf("Sorry !! Enter a Small letter");
        return 1;
    }

    printf("'%c' convert small letter : %c", a, a + 32);

    return 0;
}