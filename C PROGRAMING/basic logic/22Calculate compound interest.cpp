#include <stdio.h>
#include <math.h>  

int main() {
    double principal, rate, time, amount, compoundInterest;
    printf("Enter the principal amount : ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate: ");
    scanf("%lf", &rate);

    printf("Enter the time period : ");
    scanf("%lf", &time);
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;
    printf("Amount after %.2lf years: %.2lf\n", time, amount);
    printf("Compound Interest: %.2lf\n", compoundInterest);
}

