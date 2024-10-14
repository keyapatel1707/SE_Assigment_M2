#include <stdio.h>

int main() {
    // Declare an array of 5 strings, each with a maximum length of 50 characters
    char names[5][50];
    
    // Accept 5 student names from the user
    printf("Enter names of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nEnter name %d: ", i + 1);
        scanf("%c", names[i]);
    }
    
    // Display the names
    printf("\nThe names of the students are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%c\n", names[i]);
    }

    return 0;
}

