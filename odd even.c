#include <stdio.h>

int main() {
    int num;       // let number.

    // Input
    printf("Enter number: ");
    scanf("%d", &num);

    // Chick and print.
    if(num % 2 == 0){
        printf("%d is Even.",num);
    }
    else{
        printf("%d is Odd.",num);
    }
    

    return 0;
}
