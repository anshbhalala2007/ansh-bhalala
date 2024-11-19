//This program is prepared by 24CE008

#include <stdio.h>

int main() {
    // Initialize principal, rate, and time
    float principal = 50000.0;
    float rate = 5.5;
    float time = 3.0;

    // Calculate simple interest
    float simple_interest = (principal * rate * time) / 100;

    // Display the result
    printf("Principal Amount: %.2f\n", principal);
    printf("Interest Rate: %.2f%% per annum\n", rate);
    printf("Time Period: %.2f years\n", time);
    printf("Simple Interest: %.2f\n", simple_interest);

    printf("\n24CE008_Ansh");


    return 0;
}

