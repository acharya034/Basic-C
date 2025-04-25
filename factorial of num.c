#include <stdio.h>

int main() {
    int num;       // let number.

    // Input
    printf("Enter number: ");
    scanf("%d", &num);

    printf("The factorial series is: ");
    for(int i = 1; i<=num; i++){
        if(num % i == 0){
            printf(" %d,",i);
        }
    }
    return 0;
}
