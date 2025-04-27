#include <stdio.h>

int main() {
    int day; 

    printf("Enter any positive number. > ");
    scanf("%d",&day);

    day %= 7;  // convert any number to 0 to 6.
    day += 1;  // we need number from 1 to 7 so.

    switch (day) {
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        case 7:
            printf("Saturday\n");
            break;
        default:
            printf("Invalid day\n");
    }


    return 0;
}

