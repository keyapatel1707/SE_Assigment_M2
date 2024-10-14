#include <stdio.h>

int main()
 {
    int students, apple = 5, totalapples;

    printf("Enter the number of students: ");
    scanf("%d", &students);

    totalapples = students * apple;

    printf("Total apples required: %d\n", totalapples);
}

