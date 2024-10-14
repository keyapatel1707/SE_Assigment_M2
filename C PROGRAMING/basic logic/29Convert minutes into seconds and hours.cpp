#include <stdio.h>

int main() {
    int minutes, seconds, hours;

    printf("Enter number of minutes: ");
    scanf("%d", &minutes);

    seconds = minutes * 60;
    hours = minutes / 60;

    printf("%d minutes is equal to:\n", minutes);
    printf("%d hours\n", hours);
    printf("%d seconds\n", seconds);
}

