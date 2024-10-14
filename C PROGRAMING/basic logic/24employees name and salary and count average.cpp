#include <stdio.h>

int main() {
    // Declare variables for employee names and their salaries
    char emp1_name[50], emp2_name[50], emp3_name[50], emp4_name[50], emp5_name[50];
    float salary1, salary2, salary3, salary4, salary5;
    
    // Input for employee 1
    printf("Enter the name of employee 1: ");
    scanf("%s", emp1_name);
    printf("Enter the salary of employee 1: ");
    scanf("%f", &salary1);
    
    // Input for employee 2
    printf("Enter the name of employee 2: ");
    scanf("%s", emp2_name);
    printf("Enter the salary of employee 2: ");
    scanf("%f", &salary2);
    
    // Input for employee 3
    printf("Enter the name of employee 3: ");
    scanf("%s", emp3_name);
    printf("Enter the salary of employee 3: ");
    scanf("%f", &salary3);
    
    // Input for employee 4
    printf("Enter the name of employee 4: ");
    scanf("%s", emp4_name);
    printf("Enter the salary of employee 4: ");
    scanf("%f", &salary4);
    
    // Input for employee 5
    printf("Enter the name of employee 5: ");
    scanf("%s", emp5_name);
    printf("Enter the salary of employee 5: ");
    scanf("%f", &salary5);
    
    // Calculate total and average salary
    float total_salary = salary1 + salary2 + salary3 + salary4 + salary5;
    float average_salary = total_salary / 5;
    
    // Output the total and average salary
    printf("Total salary: %.2f\n", total_salary);
    printf("Average salary: %.2f\n", average_salary);
    
    return 0;
}

