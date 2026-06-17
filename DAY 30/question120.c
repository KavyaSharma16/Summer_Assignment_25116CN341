#include <stdio.h>
#include <string.h>

#define MAX 100

int roll[MAX];
char name[MAX][50];
float marks[MAX];
int count = 0;

void addStudent() {
    printf("Enter Roll Number: ");
    scanf("%d", &roll[count]);

    printf("Enter Name: ");
    scanf("%s", name[count]);

    printf("Enter Marks: ");
    scanf("%f", &marks[count]);

    count++;
    printf("Student added successfully!\n");
}

void displayStudents() {
    int i;

    if (count == 0) {
        printf("No records found.\n");
        return;
    }

    printf("\nRoll\tName\tMarks\n");
    for (i = 0; i < count; i++) {
        printf("%d\t%s\t%.2f\n",
               roll[i], name[i], marks[i]);
    }
}

void searchStudent() {
    int r, i;

    printf("Enter Roll Number to search: ");
    scanf("%d", &r);

    for (i = 0; i < count; i++) {
        if (roll[i] == r) {
            printf("\nRecord Found\n");
            printf("Roll Number: %d\n", roll[i]);
            printf("Name: %s\n", name[i]);
            printf("Marks: %.2f\n", marks[i]);
            return;
        }
    }

    printf("Student not found.\n");
}

void updateStudent() {
    int r, i;

    printf("Enter Roll Number to update: ");
    scanf("%d", &r);

    for (i = 0; i < count; i++) {
        if (roll[i] == r) {
            printf("Enter New Name: ");
            scanf("%s", name[i]);

            printf("Enter New Marks: ");
            scanf("%f", &marks[i]);

            printf("Record updated successfully!\n");
            return;
        }
    }

    printf("Student not found.\n");
}

void deleteStudent() {
    int r, i, j;

    printf("Enter Roll Number to delete: ");
    scanf("%d", &r);

    for (i = 0; i < count; i++) {
        if (roll[i] == r) {
            for (j = i; j < count - 1; j++) {
                roll[j] = roll[j + 1];
                strcpy(name[j], name[j + 1]);
                marks[j] = marks[j + 1];
            }

            count--;
            printf("Record deleted successfully!\n");
            return;
        }
    }

    printf("Student not found.\n");
}

int main() {
    int choice;

    do {
        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}