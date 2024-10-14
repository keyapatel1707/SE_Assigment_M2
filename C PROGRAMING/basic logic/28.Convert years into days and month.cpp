#include <stdio.h>
int main() 
{
    int years, days, months;
    printf("Enter number of years: ");
    scanf("%d", &years);
    days = years * 365; 
    months = years * 12;
    printf("%d years is equal to:\n", years);
    printf("%d months\n", months);
    printf("%d days\n", days);
}

