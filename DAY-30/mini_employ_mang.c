#include <stdio.h>
#include <string.h>

int main() {
    char names[100][50];
    int emp_ids[100];
    float salaries[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n--- Mini Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count < 100) {
                printf("Enter Employee ID: ");
                scanf("%d", &emp_ids[count]);
                printf("Enter Name (no spaces): ");
                scanf("%s", names[count]);
                printf("Enter Salary: ");
                scanf("%f", &salaries[count]);
                count++;
            } else {
                printf("Database full!\n");
            }
        } else if (choice == 2) {
            if (count == 0) {
                printf("No records found.\n");
            } else {
                printf("\nID\tName\tSalary\n");
                printf("-------------------------\n");
                for (int i = 0; i < count; i++) {
                    printf("%d\t%s\t%.2f\n", emp_ids[i], names[i], salaries[i]);
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