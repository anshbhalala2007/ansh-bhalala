//This program is prepared by 24CE008

#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50];  // Array to store names of 5 students, each with a max length of 50 characters
    char temp[50];      // Temporary string for swapping

    // Collect names of 5 students
    printf("Enter the names of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = 0;  // Remove newline character at the end
    }

    // Sort names in alphabetical order using bubble sort
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                // Swap names[i] and names[j]
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    // Display sorted names
    printf("\nNames in alphabetical order:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }
   printf("\n24CE008_Ansh");

    return 0;
}


