#include <stdio.h>

int main() {
    long long num;
    int product = 1;
    int remainder;
    int has_digits = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num == 0) {
        product = 0;
    } else {
        if (num < 0) {
            num = -num;
        }

        while (num != 0) {
            remainder = num % 10;
            product *= remainder;
            num /= 10;
        }
    }

    printf("Product of digits = %d\n", product);

    return 0;
}