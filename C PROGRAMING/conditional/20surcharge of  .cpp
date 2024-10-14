#include <stdio.h>

int main() {
    float bill, surcharge = 0.0, total_bill;
    printf("Enter the bill amount: ");
    scanf("%f", &bill);

    
    if (bill > 800) {
        surcharge = bill * 0.18;  
		    }
    
    total_bill = bill + surcharge;
    if (total_bill < 256) {
        total_bill = 256;
    }
    printf("The final bill amount is: Rs. %.2f\n", total_bill);

    return 0;
}

