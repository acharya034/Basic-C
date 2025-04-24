#include <stdio.h>

int main() {
    float r;       // Cost per unit.(Rate)
    int q;      // Total no of product.
    float A;     // Total Amount

    // Input
    printf("Enter rate of product: ");
    scanf("%f", &r);

    printf("Enter quantity: ");
    scanf("%d", &q);

    // Calculate Total amount.
    A = r * q;  // A = Rate * quantity.
    printf("The total cost is: Rs. %.2f .\n",A);

    return 0;
}
