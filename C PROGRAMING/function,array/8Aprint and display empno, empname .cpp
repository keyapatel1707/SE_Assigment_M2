#include <stdio.h>
struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};
void displayEmployee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Employee Address: %s\n", emp.address);
    printf("Employee Age: %d\n", emp.age);
}

int main() {
    struct Employee emp;
    printf("Enter Employee Number: ");
    scanf("%d", &emp.empno);
    printf("Enter Employee Name: ");
    scanf("%s", emp.empname);
    printf("Enter Employee Address: ");
    scanf("%s", emp.address);
    printf("Enter Employee Age: ");
    scanf("%d", &emp.age);
    printf("\nEmployee Details:\n");
    displayEmployee(emp);

    return 0;
}

