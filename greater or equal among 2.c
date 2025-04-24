#include <stdio.h>

int main() {
    int a,b;       // Two numbers.

    // Input
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);

    // Chick Greater one and print it.
    if(a > b){
        printf("%d is greater.",a);
    }
    else if(a < b){
        printf("%d is greater.",b);
    }
    else{
        printf("They are equal.");
    }
    

    return 0;
}
