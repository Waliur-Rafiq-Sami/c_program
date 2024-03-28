// 33. WAP to input any Small letter and display it with capital letter.(without using toupper() function)

#include <stdio.h>
#include <ctype.h>

int main()
{
    char a;
    printf("Enter a Character : ");
    scanf("%c", &a);
    if (a > 90 && a < 122)
    {
        printf("Sorry !! Enter a Small letter");
        return 1;
    }

    char con = tolower(a);

    printf("Convert to lower case : %c", con);

    return 0;
}