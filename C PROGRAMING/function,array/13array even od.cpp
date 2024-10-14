#include <stdio.h>
int main() {
    int numbers[5]; 
    int i;
    for (i = 0; i < 5; i++)
	 {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) 
		{
            printf("%d is Even\n", numbers[i]);
        } else {
            printf("%d is Odd\n", numbers[i]);
        }
    }

    return 0;
}

