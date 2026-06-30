#include <stdio.h>
#include <string.h>

int main() {
    char titles[100][50];
    char authors[100][50];
    int book_ids[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n--- Mini Library System ---\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count < 100) {
                printf("Enter Book ID: ");
                scanf("%d", &book_ids[count]);
                printf("Enter Title (no spaces): ");
                scanf("%s", titles[count]);
                printf("Enter Author (no spaces): ");
                scanf("%s", authors[count]);
                count++;
            } else {
                printf("Library full!\n");
            }
        } else if (choice == 2) {
            if (count == 0) {
                printf("No books found.\n");
            } else {
                printf("\nID\tTitle\t\tAuthor\n");
                printf("------------------------------------\n");
                for (int i = 0; i < count; i++) {
                    printf("%d\t%s\t\t%s\n", book_ids[i], titles[i], authors[i]);
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