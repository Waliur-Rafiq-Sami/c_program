// 32.  WAP  to  input  any  Capital  letter  and  display  it  with  small  letter.  (without  using  tolower() function)

#include <stdio.h>
#include <ctype.h>
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

    char con = toupper(a);

    printf("Convert to Upper case : %c", con);

    return 0;
}