#include <stdio.h>
struct Employee 
{
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
    struct Employee emp[5]; 
    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Enter Employee Number: ");
        scanf("%d", &emp[i].empno);
        printf("Enter Employee Name: ");
        scanf("%s", emp[i].empname);
        printf("Enter Employee Address: ");
        scanf("%s", emp[i].address);
        printf("Enter Employee Age: ");
        scanf("%d", &emp[i].age);
        printf("\n");
    }
    printf("Employee Details:\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        displayEmployee(emp[i]);
    }

    return 0;
}

