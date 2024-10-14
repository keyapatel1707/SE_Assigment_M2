#include <stdio.h>

int main() {
    char c;
    int i, j;

    for (i = 1; i <= 5; i++) {
        printf("Enter name %d \n", i);        
        do {
            scanf("%c", &c);
            if (c != '\n') {
                printf("%c", c);
            }
        } while (c != '\n'); 

        printf("\n");
    }

    return 0;
}

