#include <stdio.h>
#include <math.h> // For sqrt function

int main() {
    int num;       // Two numbers.

    // Input
    printf("Enter number: ");
    scanf("%d", &num);

    // Chick and print.
    if(num > 0){
        printf("%d is Positive.",num);
    }
    else if(num < 0){
        printf("%d is Negative.",num);
    }
    else{
        printf("It's zero.");
    }
    

    return 0;
}
