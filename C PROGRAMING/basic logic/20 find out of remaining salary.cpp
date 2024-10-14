#include <stdio.h>

int main() {
    double salary, insurance, loan, reSalary;
    printf("Enter your monthly salary: ");
    scanf("%lf", &salary);
    insurance = 0.10 * salary;
    loan = 0.10 * salary;
    reSalary = salary - (insurance + loan);
    printf("Monthly Salary: %.2lf\n", salary);
    printf("Insurance Premium Deducted: %.2lf\n", insurance);
    printf("Loan Installment Deducted: %.2lf\n", loan);
    printf("Remaining Salary after deductions: %.2lf\n", reSalary);
}

