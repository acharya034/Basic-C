#include <stdio.h>

int main() {
    int a, b, c; //let 3 numbers be a, b & c.
    int avg; //let average be avg.

    printf("Enter first number. ");
    scanf("%d",&a); //to input first number.
    printf("Enter second number. ");
    scanf("%d",&b); //to input second number.
    printf("Enter third number. ");
    scanf("%d",&c); //to input third number.

    // calculation for average.
    avg = (a+b+c)/3; // average = (a+b+c)/3.
    printf("The average of given numbers is %d.",avg);

    return 0;
}

