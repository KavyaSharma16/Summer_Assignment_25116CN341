#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    do {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Copy String\n");
        printf("4. Convert to Uppercase\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Length = %lu\n", strlen(str));
                break;

            case 2:
                strcpy(temp, str);
                strrev(temp);
                printf("Reversed String = %s\n", temp);
                break;

            case 3:
                strcpy(temp, str);
                printf("Copied String = %s\n", temp);
                break;

            case 4:
                strcpy(temp, str);
                for(int i = 0; temp[i] != '\0'; i++) {
                    if(temp[i] >= 'a' && temp[i] <= 'z')
                        temp[i] = temp[i] - 32;
                }
                printf("Uppercase String = %s\n", temp);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}