//This program is prepared by 24CE008

#include <stdio.h>

int main() {
    int choice;
    int quantity;
    float total_cost = 0.0;

    // Display the menu
    printf("Welcome to Foodies Restaurant!\n");
    printf("Menu:\n");
    printf("1. Burger - ₹150\n");
    printf("2. Pizza - ₹200\n");
    printf("3. Pasta - ₹120\n");
    printf("4. Sandwich - ₹100\n");
    printf("5. French Fries - ₹80\n");
    printf("Enter '0' to finish ordering.\n");

    // Loop for ordering
    do {
        // Ask the user to select an item
        printf("\nEnter the number of the item you want to order: ");
        scanf("%d", &choice);

        if (choice == 0) {
            break;  // Exit the loop if the user enters 0
        }

        // Ask the user for the quantity of the selected item
        if (choice >= 1 && choice <= 5) {
            printf("Enter the quantity: ");
            scanf("%d", &quantity);

            // Calculate the total cost based on the selection
            switch (choice) {
                case 1:
                    total_cost += 150 * quantity;  // Burger
                    break;
                case 2:
                    total_cost += 200 * quantity;  // Pizza
                    break;
                case 3:
                    total_cost += 120 * quantity;  // Pasta
                    break;
                case 4:
                    total_cost += 100 * quantity;  // Sandwich
                    break;
                case 5:
                    total_cost += 80 * quantity;   // French Fries
                    break;
                default:
                    printf("Invalid choice. Please select a valid item.\n");
                    continue;  // Skip the rest of the loop for invalid input
            }
        } else if (choice != 0) {
            printf("Invalid choice. Please enter a valid number from the menu.\n");
        }

    } while (choice != 0);  // Continue ordering until the user enters 0

    // Display the total cost of the order
    printf("\nYour total order amount is: ₹%.2f\n", total_cost);
    printf("\n24CE008_Ansh");


    return 0;
}
