#include <stdio.h>

int main() {
    float r, A, C; // Variables for radius, area, and circumference
    const float pi = 3.14159;  // Value of pi

    printf("What's the radius of the circle? > ");
    scanf("%f", &r);

    A = pi * r * r; // Area = πr²
    C = 2 * pi * r; // Circumference = 2πr

    printf("Area of the circle: %.2f square units\n", A);
    printf("Circumference of the circle: %.2f units\n", C);

    return 0;
}
