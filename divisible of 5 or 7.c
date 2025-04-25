#include <stdio.h>

int main() {
    int num;       // let number.

    // Input
    printf("Enter number: ");
    scanf("%d", &num);

    // Chick and print.
    if(num % 5 == 0){
        printf("%d is divisible by 5.",num);
    }
    if(num % 7 == 0){
        printf("%d is divisible by 7.",num);
    }
    

    return 0;
}
