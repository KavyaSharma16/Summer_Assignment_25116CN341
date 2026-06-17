#include <stdio.h>

int main() {
    int availableTickets = 100;
    int bookedTickets;
    int choice;

    do {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Check Available Tickets\n");
        printf("2. Book Tickets\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Available Tickets: %d\n", availableTickets);
                break;

            case 2:
                printf("Enter number of tickets to book: ");
                scanf("%d", &bookedTickets);

                if(bookedTickets <= availableTickets) {
                    availableTickets -= bookedTickets;
                    printf("%d Ticket(s) Booked Successfully!\n", bookedTickets);
                    printf("Remaining Tickets: %d\n", availableTickets);
                } else {
                    printf("Sorry! Not enough tickets available.\n");
                }
                break;

            case 3:
                printf("Thank you for using the Ticket Booking System.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}