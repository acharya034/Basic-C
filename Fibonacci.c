#include <stdio.h>

int main() {
    int a=0;       // let first term.
    int b=1;      // let second term.
    int c;       // For calculation.
    int n;      // For counting.

    printf("The Fibonacci series is: 0, 1, ");
    n = 10; //let as we need to find first 10 term.
    for(int i = 1; i<=(n-2); i++){
        c = a + b;
        a = b;
        b = c;
        printf("%d, ",c);
    }
    return 0;
}
