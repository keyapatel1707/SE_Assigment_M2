#include <stdio.h>

int main() 
{
    float width, length, height, area;
    printf("Enter the width  ");
    scanf("%f", &width);

    printf("Enter the length");
    scanf("%f", &length);

    printf("Enter the height  ");
    scanf("%f", &height);
    area = 2 * (width * length + height * length + height * width);
    printf("The area of the rectangular : %.2f\n", area);

    return 0;
}

