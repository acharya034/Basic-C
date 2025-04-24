#include <stdio.h>

int main() {
    const float PI = 3.1416;  //The value of π
    float r;       // Radius of the sphere.
    float area;    // Surface area of the sphere
    float volume;  // Volume of the sphere

    printf("Enter the value in SI units.\n");

    // Input
    printf("Enter radius of the sphere: ");
    scanf("%f", &r);

    // Calculate surface area of sphere
    area = 4 * PI * r * r;  // A = 4πr²
    printf("The area of the sphere is: %.2f square meters.\n", area);

    // Calculate volume of sphere
    volume = (4.0 / 3) * PI * r * r * r;  // V = (4/3)πr³
    printf("The volume of the sphere is: %.2f cubic meters.\n", volume);

    return 0;
}
