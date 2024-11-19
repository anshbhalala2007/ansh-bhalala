//This program is prepared by 24CE008_Ansh

#include <stdio.h>

int main() {
    int marks;
    char grade;

    // Taking input from the user
    printf("Enter the student's marks (0-100): ");
    scanf("%d", &marks);

    // Validate the input
    if (marks < 0 || marks > 100) {
        printf("Invalid input! Marks should be between 0 and 100.\n");
    } else {
        // Determine grade using the conditional (ternary) operator
        grade = (marks >= 90) ? 'A' :
                (marks >= 80) ? 'B' :
                (marks >= 70) ? 'C' :
                (marks >= 60) ? 'D' : 'F';

        // Display the grade
        printf("The student's grade is: %c\n", grade);
    }
    printf("\n\n24CE008_Ansh\n");


    return 0;
}

