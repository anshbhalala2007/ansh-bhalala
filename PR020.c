//This program is prepared by 24CE008

#include <stdio.h>

// Function 1: No arguments passed, no return value
void displayWelcomeMessage() {
    printf("Welcome to CHARUSAT Student Grading System!\n");
    printf("===========================================\n");
}

// Function 2: No arguments passed, but returns an integer (number of students)
int collectNumberOfStudents() {
    int num;
    printf("Enter the number of students: ");
    scanf("%d", &num);
    return num;
}

// Function 3: Argument passed (number of students), no return value
void collectAndDisplayGrades(int numStudents) {
    int grades[numStudents];
    printf("Enter the grades of %d students:\n", numStudents);
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    printf("\nGrades of students are:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: %d\n", i + 1, grades[i]);
    }
}

// Function 4: Argument passed (number of students), returns the average grade
float calculateAverageGrade(int numStudents) {
    int grades[numStudents];
    int total = 0;

    printf("\nEnter the grades of %d students to calculate average:\n", numStudents);
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &grades[i]);
        total += grades[i];
    }

    float average = (float)total / numStudents;
    return average;
}

int main() {
    // Function 1: Display the welcome message
    displayWelcomeMessage();

    // Function 2: Collect the number of students
    int numStudents = collectNumberOfStudents();

    // Function 3: Collect and display grades of students
    collectAndDisplayGrades(numStudents);

    // Function 4: Calculate and display the average grade of students
    float averageGrade = calculateAverageGrade(numStudents);
    printf("\nThe average grade of the students is: %.2f\n", averageGrade);

    printf("\n24CE008_Ansh");

    return 0;
}

