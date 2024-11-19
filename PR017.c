//This program is prepared by 24CE008

#include <stdio.h>

#define ROWS 5
#define SEATS_PER_ROW 10

void displaySeating(int seats[ROWS][SEATS_PER_ROW]) {
    printf("Seating Chart:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < SEATS_PER_ROW; j++) {
            printf("%c ", seats[i][j] ? 'X' : 'O'); // X for Reserved, O for Available
        }
        printf("\n");
    }
}

int main() {
    int seats[ROWS][SEATS_PER_ROW] = {0}; // Initialize all seats as available (0)
    int reservedSeats, row, seat;

    printf("Enter the number of reserved seats: ");
    scanf("%d", &reservedSeats);

    for (int i = 0; i < reservedSeats; i++) {
        printf("Enter row and seat number for reserved seat %d (e.g., 1 3): ", i + 1);
        scanf("%d %d", &row, &seat);

        if (row < 1 || row > ROWS || seat < 1 || seat > SEATS_PER_ROW) {
            printf("Invalid seat location. Please enter row (1-%d) and seat (1-%d).\n", ROWS, SEATS_PER_ROW);
            i--; // Retry this reservation
        } else if (seats[row - 1][seat - 1] == 1) {
            printf("Seat already reserved. Choose a different seat.\n");
            i--; // Retry this reservation
        } else {
            seats[row - 1][seat - 1] = 1; // Mark the seat as reserved
        }
    }

    displaySeating(seats);
    printf("\n24CE008_Ansh");


    return 0;
}

