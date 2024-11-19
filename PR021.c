
//This program is prepared by 24CE008

#include <stdio.h>
#include <math.h>

// Function to check if three sides can form a triangle
int is_triangle(float a, float b, float c)
{
    return (a + b > c) && (a + c > b) && (b + c > a);
}

// Function to calculate the area of a triangle using Heron's formula
float calculate_area(float a, float b, float c)
{
    float s = (a + b + c) / 2;  // Semi-perimeter
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

// Main function
int main()
{
    float side1, side2, side3;

    // Collect the lengths of the three sides
    printf("Enter the lengths of the three sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%f", &side1);
    printf("Side 2: ");
    scanf("%f", &side2);
    printf("Side 3: ");
    scanf("%f", &side3);

    // Check if the sides form a valid triangle
    if (is_triangle(side1, side2, side3))
    {
        // Calculate and display the area using Heron's formula
        float area = calculate_area(side1, side2, side3);
        printf("The sides form a valid triangle.\n");
        printf("The area of the triangle is: %.2f\n", area);
    }
    else
    {
        printf("The lengths provided do not form a valid triangle.\n");
    }
    printf("\n24CE008_Ansh");


    return 0;
}

