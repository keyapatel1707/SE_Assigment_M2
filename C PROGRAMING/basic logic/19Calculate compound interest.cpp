#include <stdio.h>

int main() {
    double principal, rate, time, compound_interest;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in %): ");
    scanf("%lf", &rate);

    printf("Enter time period (in years): ");
    scanf("%lf", &time);

    rate = rate / 100; // convert rate to decimal

    compound_interest = principal * pow((1 + rate), time) - principal;

    printf("Compound Interest: %.2lf\n", compound_interest);

    return 0;
}
