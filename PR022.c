   //This program is prepared by 24CE008

#include <stdio.h>

int calculate_total(int marks[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += marks[i];
    }
    return total;
}

float calculate_average(int marks[], int n) {
    int total = calculate_total(marks, n);
    return (float)total / n;
}

int find_highest(int marks[], int n) {
    int highest = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }
    return highest;
}

int find_lowest(int marks[], int n) {
    int lowest = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }
    return lowest;
}

int main() {
    int n;

    // Get the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];

    // Get marks of each student
    printf("Enter the marks of each student:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Calculate and display the results
    int total = calculate_total(marks, n);
    float average = calculate_average(marks, n);
    int highest = find_highest(marks, n);
    int lowest = find_lowest(marks, n);

    printf("\n--- Student Performance Analysis ---\n");
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Highest Marks: %d\n", highest);
    printf("Lowest Marks: %d\n", lowest);

    printf("\n24CE008_Ansh");

    return 0;
}

