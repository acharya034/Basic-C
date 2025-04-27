
#include <stdio.h>
#include <string.h>

int main() {

    int option; 
    printf("Choose any one option.\n");
    printf("\t1> Addition.\n");
    printf("\t2> subtraction.\n");
    printf("\t3> Multiplication.\n");
    printf("\t4> Division. \n\t\t>>");
    
    scanf("%d",&option);

    int a, b; // for two number.
    int ans; // for answer.

    printf("Okay Got it,\n");
    printf("Enter first number. > \n");
    scanf("%d",&a);
    printf("Enter second number. > \n");
    scanf("%d",&b);

    switch (option) {
        case 1:
            ans = a + b; // Addition.
            break;
            
        case 2:
            ans = a - b; // Addition.
            break;

        case 3:
            ans = a * b; // Addition.
            break;

        case 4:
            ans = a / b; // Addition.
            break;
    
    }

    printf("Thus, the final answer is %d.",ans); // print final result.
    return 0;
}