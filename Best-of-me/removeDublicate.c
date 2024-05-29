#include <stdio.h>
int main()
{

    int n;
    printf("Enter array size : ");
    scanf("%d", &n);
    int originalArray[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter [%d] index value : ", i);
        scanf("%d", &originalArray[i]);
    }

    // sloat
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (originalArray[i] < originalArray[j])
            {
                int var = originalArray[i];
                originalArray[i] = originalArray[j];
                originalArray[j] = var;
            }
        }
    }
    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {

        if (originalArray[i] == originalArray[i + 1])
        {
            temp = originalArray[i];
        }
        int d = n;
        for (int j = 0; j < d; j++)
        {
            if (temp == originalArray[j])
            {
                originalArray[j] = 0;
            }
        }
    }

    // print
    int i = 0, c = 0;
    while (i < n)
    {
        if (originalArray[i] != 0)
        {
            c++;
        }
        i++;
    }
    printf("After removing dublicate Element[%d] : ", c);
    i = 0;
    while (i < n)
    {
        if (originalArray[i] != 0)
        {
            printf("%d ", originalArray[i]);
        }
        i++;
    }
    return 0;
}
