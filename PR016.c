//This program is prepared by 24CE008

#include <stdio.h>

int main()
{
    int num_items;

    // Prompt user for number of items
    printf("Enter the number of items in the inventory: ");
    scanf("%d", &num_items);

    // Declare an array to store prices
    float prices[num_items];

    // Get the prices from the user
    for (int i = 0; i < num_items; i++)
    {
        printf("Enter the price of item %d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    // Sort prices in ascending order using bubble sort
    for (int i = 0; i < num_items - 1; i++)
    {
        for (int j = 0; j < num_items - i - 1; j++)
        {
            if (prices[j] > prices[j + 1])
            {
                // Swap prices[j] and prices[j + 1]
                float temp = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = temp;
            }
        }
    }

    // Display sorted prices
    printf("\nPrices in ascending order:\n");
    for (int i = 0; i < num_items; i++)
    {
        printf("%.2f\n", prices[i]);
    }

   printf("\n24CE008_Ansh");


    return 0;
}


