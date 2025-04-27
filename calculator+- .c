#include <stdio.h>

int main() {
    char option; 
    int a, b; // Variables for two numbers.
    int ans;  // Variable for the answer.

    printf("Choose an operation:\n");
    printf("\t+ : Addition\n");
    printf("\t- : Subtraction\n");
    printf("\t* : Multiplication\n");
    printf("\t/ : Division\n");
    printf("Enter your choice: ");
    scanf(" %c", &option);

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    switch (option) {
        case '+':
            ans = a + b;
            printf("Result: %d + %d = %d\n", a, b, ans);
            break;
        case '-':
            ans = a - b;
            printf("Result: %d - %d = %d\n", a, b, ans);
            break;
        case '*':
            ans = a * b;
            printf("Result: %d * %d = %d\n", a, b, ans);
            break;
        case '/':
            if (b != 0) {
                ans = a / b;
                printf("Result: %d / %d = %d\n", a, b, ans);
            } else {
                printf("Error: Division by zero is undefined.\n");
            }
            break;
        default:
            printf("Error: Invalid operator entered.\n");
    }

    return 0;
}
