//This program is prepared by 24CE008_Ansh

#include <stdio.h>

int main()
{

    int startDay = 2;
    int endDay = 100;
    int costPerDay = 200;
    int totalBudget = 0;

    for (int day = startDay; day <= endDay; day += 2)
    {
        totalBudget += costPerDay;
    }

    printf("Total budget allocated for even-day events: %d Rs\n", totalBudget);
    printf("\n24CE008_Ansh ");
    return 0;
}

