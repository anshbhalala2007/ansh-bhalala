//This program is prepared by 24CE008

#include <stdio.h>

#define MAX_NOTE_LENGTH 1000

int calculateLength(char note[]) {
    int length = 0;
    while (note[length] != '\0') {
        length++;
    }
    return length;
}

void reverseNote(char note[]) {
    int length = calculateLength(note);
    for (int i = 0; i < length / 2; i++) {
        char temp = note[i];
        note[i] = note[length - 1 - i];
        note[length - 1 - i] = temp;
    }
}

int compareNotes(char note1[], char note2[]) {
    int i = 0;
    while (note1[i] != '\0' && note2[i] != '\0') {
        if (note1[i] != note2[i]) {
            return note1[i] - note2[i];
        }
        i++;
    }
    return note1[i] - note2[i];  // If one string is a prefix of the other
}

void copyNote(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';  // Null-terminate the destination string
}

void concatenateNotes(char note1[], char note2[]) {
    int length1 = calculateLength(note1);
    int i = 0;
    while (note2[i] != '\0') {
        note1[length1 + i] = note2[i];
        i++;
    }
    note1[length1 + i] = '\0';  // Null-terminate the concatenated string
}

int main() {
    char note1[MAX_NOTE_LENGTH], note2[MAX_NOTE_LENGTH];
    int choice;

    while (1) {
        printf("\nNote-taking Application\n");
        printf("1. Calculate length of a note\n");
        printf("2. Reverse a note\n");
        printf("3. Compare two notes\n");
        printf("4. Copy one note to another\n");
        printf("5. Concatenate two notes\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        getchar();  // To consume the newline character after scanf

        switch (choice) {
            case 1:
                printf("Enter the note: ");
                fgets(note1, MAX_NOTE_LENGTH, stdin);
                printf("Length of the note: %d\n", calculateLength(note1));
                break;

            case 2:
                printf("Enter the note to reverse: ");
                fgets(note1, MAX_NOTE_LENGTH, stdin);
                reverseNote(note1);
                printf("Reversed note: %s\n", note1);
                break;

            case 3:
                printf("Enter first note: ");
                fgets(note1, MAX_NOTE_LENGTH, stdin);
                printf("Enter second note: ");
                fgets(note2, MAX_NOTE_LENGTH, stdin);
                int cmp = compareNotes(note1, note2);
                if (cmp == 0) {
                    printf("The notes are identical.\n");
                } else if (cmp > 0) {
                    printf("The first note is greater than the second.\n");
                } else {
                    printf("The first note is smaller than the second.\n");
                }
                break;

            case 4:
                printf("Enter the note to copy: ");
                fgets(note1, MAX_NOTE_LENGTH, stdin);
                copyNote(note2, note1);
                printf("Copied note: %s\n", note2);
                break;

            case 5:
                printf("Enter the first note: ");
                fgets(note1, MAX_NOTE_LENGTH, stdin);
                printf("Enter the second note to concatenate: ");
                fgets(note2, MAX_NOTE_LENGTH, stdin);
                concatenateNotes(note1, note2);
                printf("Concatenated note: %s\n", note1);
                break;

            case 6:
                printf("\n24CE008_Ansh\n");

                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
//   printf("\n24CE008_Ansh");

    return 0;
}


