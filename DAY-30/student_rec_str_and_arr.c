#include <stdio.h>
#include <string.h>

int main() {
    char names[100][50];
    int roll_numbers[100];
    float marks[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count < 100) {
                printf("Enter Roll Number: ");
                scanf("%d", &roll_numbers[count]);
                printf("Enter Name: ");
                scanf("%s", names[count]);
                printf("Enter Marks: ");
                scanf("%f", &marks[count]);
                count++;
            } else {
                printf("Database full!\n");
            }
        } else if (choice == 2) {
            if (count == 0) {
                printf("No records found.\n");
            } else {
                printf("\nRoll No\tName\tMarks\n");
                printf("-------------------------\n");
                for (int i = 0; i < count; i++) {
                    printf("%d\t%s\t%.2f\n", roll_numbers[i], names[i], marks[i]);
                }
            }
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}