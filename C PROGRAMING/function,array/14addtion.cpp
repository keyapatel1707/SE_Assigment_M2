#include <stdio.h> 
 
int main() { 
    float numbers[5]; 
    float sum = 0;  
 
    for (int i = 0; i < 5; i++) { 
        printf("Enter number %d: ", i + 1); 
        scanf("%f", &numbers[i]); 
        sum += numbers[i];
	}
    printf("The sum of the five numbers you entered is %.2f\n", sum); 
     return 0; 
} 
