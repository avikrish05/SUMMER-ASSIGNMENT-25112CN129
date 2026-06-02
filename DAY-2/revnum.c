#include <stdio.h>

int main() {
    long long num;
    long long reversed = 0;
    int remainder;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    int is_negative = 0;
    if (num < 0) {
        is_negative = 1;
        num = -num;
    }

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (is_negative) {
        reversed = -reversed;
    }

    printf("Reversed number = %lld\n", reversed);

    return 0;
}