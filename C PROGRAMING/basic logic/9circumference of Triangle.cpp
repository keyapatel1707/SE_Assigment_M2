#include <stdio.h>

int main() {
    float a, b, c, p;

    printf("Enter the length of side a: ");
    scanf("%f", &a);

    printf("Enter the length of side b: ");
    scanf("%f", &b);

    printf("Enter the length of side c: ");
    scanf("%f", &c);

    
    p = a + b + c;
    printf(" the triangle is: %.2f\n", p);

    return 0;
}

