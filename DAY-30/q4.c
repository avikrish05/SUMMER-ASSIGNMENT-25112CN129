#include <stdio.h>
#include <string.h>

int roll[10], n;
char name[10][50];
float marks[10];

static void trim_newline(char *s) {
    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }
}

void addStudents() {
    int i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    getchar();

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        getchar();

        printf("Name: ");
        if (fgets(name[i], sizeof(name[i]), stdin) != NULL) {
            trim_newline(name[i]);
        } else {
            name[i][0] = '\0';
        }

        printf("Marks: ");
        scanf("%f", &marks[i]);

        getchar();
    }
}

void displayStudents() {
    int i;

    printf("\n----- Student Records -----\n");

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", roll[i]);
        printf("Name        : %s\n", name[i]);
        printf("Marks       : %.2f\n", marks[i]);
    }
}

int main() {
    addStudents();
    displayStudents();

    return 0;
}