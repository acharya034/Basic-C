#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c;       // Three sides.
    float S,A;     // semi perimeter & Area.

    // Input
    printf("Enter length of first side: ");
    scanf("%f", &a);
    
    printf("Enter length of second side: ");
    scanf("%f", &b);
    
    printf("Enter length of third side: ");
    scanf("%f", &c);
 
    //semi perimeter 
    S = (a+b+c)/2;

    // Area.
    A = sqrt(S * (S - a) * (S - b) * (S - c)); // area = {s(s−a)(s−b)(s−c)}^1/2
    printf("The total cost is: %.2f sq unit.\n",A);

    return 0;
}
