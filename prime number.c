#include <stdio.h>

int main() {
    
    int n = 100; // Example upto 100.
    printf("Prime number upto %dth term are:",n);
    for (int i = 2; i <= n; i++){
        int prime = 1;
        for (int j = 2; j < i; j++){
            if (i % j == 0){
                prime = 0;
                break;
            }
        }
        if (prime == 1){
            printf("%d, ",i);
        }
    }
    return 0;
}
