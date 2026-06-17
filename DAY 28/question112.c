#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c[100];
    int n, i;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Contact %d\n", i + 1);

        printf("Name: ");
        scanf("%s", c[i].name);

        printf("Phone Number: ");
        scanf("%s", c[i].phone);
    }

    printf("\n===== CONTACT LIST =====\n");

    for(i = 0; i < n; i++) {
        printf("\nContact %d\n", i + 1);
        printf("Name: %s\n", c[i].name);
        printf("Phone Number: %s\n", c[i].phone);
    }

    return 0;
}