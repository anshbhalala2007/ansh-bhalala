//This program is prepared by 24CE008_Ansh

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j % 2);
        }
        printf("\n");
    }
    printf("\n24CE008_Ansh");

    return 0;
}

