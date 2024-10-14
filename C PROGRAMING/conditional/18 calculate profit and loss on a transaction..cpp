#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLoss;
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);
    if (sellingPrice > costPrice) {
        profitOrLoss = sellingPrice - costPrice;
        printf("Profit = %.2f\n", profitOrLoss);
    } else if (costPrice > sellingPrice) {
        profitOrLoss = costPrice - sellingPrice;
        printf("Loss = %.2f\n", profitOrLoss);
    } else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}

