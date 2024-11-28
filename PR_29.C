#include <stdio.h>
#include <stdlib.h>

int main() {
    char *a;
    int n;

    // Input the initial size of the string
    printf("Enter the size of the string you want to create: ");
    scanf("%d", &n);

    // Allocate memory using calloc (+1 for null terminator)
    a = (char *)calloc(n + 1, sizeof(char));
    if (a == NULL) {
        printf("Memory allocation failed!\n");
        return  0;
    }

    // Input the string
    printf("\nEnter your string: ");
    getchar(); // Consume the newline left by scanf
    fgets(a, n + 1, stdin); // Read string safely
    printf("Your string: ");
    puts(a);

    // Input the new size for the string
    printf("\nEnter new size of the string: ");
    scanf("%d", &n);

    // Reallocate memory
    char *temp = (char *)realloc(a, (n + 1) * sizeof(char));
    if (temp == NULL) {
        printf("Memory reallocation failed!\n");
        free(a); // Free the previously allocated memory
        return 0;
    }
    a = temp; // Assign the new memory to `a`

    // Input the new string
    printf("\nEnter your new string: ");
    getchar(); // Consume the newline left by scanf
    fgets(a, n + 1, stdin); // Read new string safely
    printf("Your new string: ");
    puts(a);

    // Free the allocated memory
    free(a);
    printf("\n24CE008_Ansh_bhalala\n");
    return 0;
}

