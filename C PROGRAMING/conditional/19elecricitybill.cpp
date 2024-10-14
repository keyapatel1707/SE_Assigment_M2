#include <stdio.h>
int main() 
{
    int customer_id, units;
    char name[50];
    float charge, total_amount;
    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);
    printf("Enter Customer Name: ");
    scanf("%s", name);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);
    if (units <= 350) {
        charge = 1.20;
    } else if (units > 350 && units < 600) {
        charge = 1.50;
    } else if (units >= 600 && units < 800) {
        charge = 1.80;
    } else {
        charge = 2.00;
    }
    total_amount = units * charge;
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Charge per Unit: %.2f\n", charge);
    printf("Total Amount: %.2f\n", total_amount);
    return 0;
}

