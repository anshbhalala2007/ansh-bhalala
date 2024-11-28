
#include <stdio.h>

int main()
{
    FILE *F1;  // File pointer
    int number, i;
    // Open file in write mode
    F1 = fopen("marks.txt", "w");
    if (F1 == NULL) {
        printf("Error opening file for writing!\n");
        return 0;
    }

    printf("Enter the contents of the marks file:\n");
    for (i = 0; i < 5; i++) {  // Collect 5 marks
        scanf("%d", &number);
        putw(number, F1);  // Write the number to the file
    }
    fclose(F1);  // Close the file after writing
    // Open file in read mode
    F1 = fopen("marks.txt", "r");
    if (F1 == NULL) {
        printf("Error opening file for reading!\n");
        return 0;
    }

    printf("\nDisplaying the marks:\n");
    while ((number = getw(F1)) != EOF) {  // Read until end of file
        printf("%d ", number);
    }
    fclose(F1);  // Close the file after reading

    // Final output
    printf("\nID number = 24CE008\n");
    return 0;
}
