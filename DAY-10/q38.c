#include <stdio.h>

int main() {
    int r = 5;
    for (int i = r; i >= 1; i--) {
        for (int s = 1; s <= r - i; s++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}