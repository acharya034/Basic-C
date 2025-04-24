#include <stdio.h>

int main() {
    float u;      // Initial velocity
    int t;        // Time interval
    float a;      // Acceleration
    float s;      // Distance travelled 

    printf("Enter the value in si unit.\n");
    // Input
    printf("Enter initial velocity: ");
    scanf("%f", &u);

    printf("Enter time interval: ");
    scanf("%d", &t);

    printf("Enter accleration: ");
    scanf("%f", &a);

    // Calculate simple interest
    s = u * t + 1/2 * a * t * t;  // s=ut + 1/2 at^2.
    printf("The distance travelled is: %.2f meter.", s);

    return 0;
}
