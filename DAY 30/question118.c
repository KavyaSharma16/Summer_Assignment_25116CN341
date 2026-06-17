#include <stdio.h>

int main() {
    int n, i;
    char book[100][50];
    char author[100][50];

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book Name: ");
        scanf("%s", book[i]);

        printf("Author Name: ");
        scanf("%s", author[i]);
    }

    printf("\n===== LIBRARY RECORDS =====\n");

    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        
        printf("Book Name: %s\n", book[i]);
        printf("Author Name: %s\n", author[i]);
    }

    return 0;
}