//This program is prepared by 24CE008

#include <stdio.h>

int main() {
    // Initialize the given values
    long int total_population = 1441981744;
    float women_percentage = 48.4;
    float literacy_rate_total = 85.95;
    float literacy_rate_male = 80.95;
    float literacy_rate_female = 62.84;

    // Calculate the number of women and men
    long int total_women = (long int)(total_population * (women_percentage / 100));
    long int total_men = total_population - total_women;

    // Calculate literate men and women
    long int literate_men = (long int)(total_men * (literacy_rate_male / 100));
    long int literate_women = (long int)(total_women * (literacy_rate_female / 100));

    // Calculate illiterate men and women
    long int illiterate_men = total_men - literate_men;
    long int illiterate_women = total_women - literate_women;

    // Display the results
    printf("Population of Bharat in 2024: %ld\n", total_population);
    printf("Total women: %ld\n", total_women);
    printf("Total men: %ld\n", total_men);
    printf("Literate men: %ld\n", literate_men);
    printf("Literate women: %ld\n", literate_women);
    printf("Illiterate men: %ld\n", illiterate_men);
    printf("Illiterate women: %ld\n", illiterate_women);

    printf("\n24CE008_Ansh");


    return 0;
}

