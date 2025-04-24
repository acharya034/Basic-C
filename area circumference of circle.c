#include <stdio.h>

int main() {
    int r; // let radius be r.
    const float pi = 3.1416; // Use pi as 3.1416.
    float a; // let area be a.
    float c; // let circumference be c.
    printf("Enter radius of circle in meter. ");
    scanf("%d",&r);//to input radius.

    // calculation for area.
    a = pi * r * r;// area = πr^2 = π * r * r.
    printf("The area of circle is %.2f meter square.\n",a);

    // calculation for circumference.
    c = 2 * pi * r;// circumference = 2πr.
    printf("The circumference of circle is %.2f meter.",c);

    return 0;
}

