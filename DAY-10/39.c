#include <stdio.h>

int main() {
    int r = 5;
    for (int i = 1; i <= r; i++) {
        for (int s = 1; s <= r - i; s++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}