//This program is prepared by 24CE008

#include <stdio.h>

int main() {
    // Asset values for Raman
    int raman_bungalow = 12000000;
    int raman_plot = 6000000;
    int raman_car = 3000000;

    // Asset values for Suman
    int suman_apartment = 11000000;
    int suman_hotel = 8000000;
    int suman_car = 8000000;

    // Calculate total wealth
    int total_raman = raman_bungalow + raman_plot + raman_car;
    int total_suman = suman_apartment + suman_hotel + suman_car;

    // Display the total wealth of Raman and Suman
    printf("Total wealth of Raman: ₹%d\n", total_raman);
    printf("Total wealth of Suman: ₹%d\n", total_suman);

    // Compare wealth
    if (total_raman > total_suman) {
        printf("Raman is wealthier than Suman.\n");
    } else if (total_suman > total_raman) {
        printf("Suman is wealthier than Raman.\n");
    } else {
        printf("Raman and Suman have equal wealth.\n");
    }
    printf("\n24CE008_Ansh");

    return 0;
}

