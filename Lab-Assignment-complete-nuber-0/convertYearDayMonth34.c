// 34. WAP to input the number the days from the user and convert it into years, months and days.

#include <stdio.h>
int main()
{
    unsigned long long number;
    printf("Enter a number : ");
    scanf("%llu", &number);

    if (number < 0)
    {
        printf("Sorry !! Invalid Number Input");
        return 1;
    }

    unsigned long year = number / 365;
    unsigned long reVmonth = number % 365;
    unsigned long month = reVmonth / 30;
    unsigned long day = reVmonth % 30;

    printf("\n Year : %ld ", year);
    printf("\n Month : %ld ", month);
    printf("\n Day : %ld ", day);

    return 0;
}