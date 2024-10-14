#include <stdio.h>

int main() {
    int num, count = 0, evenCount = 0, oddCount = 0;
    while (count < 5) {
        printf("Enter number %d: ", count + 1);
        scanf("%d", &num);
        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        count++;
    }
    printf("\nTotal even numbers: %d", evenCount);
    printf("\nTotal odd numbers: %d\n", oddCount);

    return 0;
}

