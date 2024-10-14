#include <stdio.h>

int main() 
{
    float a, b, c, p;
    printf("Enter the length of the first side of: ");
    scanf("%f", &a);
    printf("Enter the length of the secound: ");
    scanf("%f", &b);
    printf("Enter the length of the third: ");
    scanf("%f", &c);
    p = a + b + c;
    printf("The perimeter of the triangle is: %.2f\n", p);
}
	
