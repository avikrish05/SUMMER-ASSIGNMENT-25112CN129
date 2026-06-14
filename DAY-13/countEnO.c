#include <stdio.h>

int main() {
    int arr[] = {12, 45, 7, 9, 22, 50, 31, 8, 19, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Total even elements: %d\n", evenCount);
    printf("Total odd elements: %d\n", oddCount);

    return 0;
}