//This program is prepared by 24CE008

#include <stdio.h>

int main()
{
    int numbers[5];
    int positive = 0, negative = 0, even = 0, odd = 0;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);

        if (numbers[i] > 0) positive++;
        else if (numbers[i] < 0) negative++;

        if (numbers[i] % 2 == 0) even++;
        else odd++;
    }

    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    printf("\n24CE008_Ansh");

    return 0;
}

