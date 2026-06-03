#include <stdio.h>

int main() {
    int start, end;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    for (int i = start; i <= end; i++) {
        if (i <= 1) continue;

        int count = 0;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                count++;
            }
        }

        if (count == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}