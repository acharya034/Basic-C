#include <stdio.h>

int main() {
    int p;         // Principal amount
    float r;       // Interest rate (percentage)
    int t;         // Time (in years)
    float si;      // Simple interest
    float A;       // Total amount after interest

    // Input
    printf("Enter principal: ");
    scanf("%d", &p);

    printf("Enter interest rate: ");
    scanf("%f", &r);

    printf("Enter time in years: ");
    scanf("%d", &t);

    // Calculate simple interest
    si = (p * r * t) / 100.0;
    printf("The simple interest is: %.2f\n", si);

    // Calculate total amount
    A = p + si;
    printf("The total amount after interest is: %.2f\n", A);

    return 0;
}
