#include <stdio.h>

int main() {
    int day; 

    printf("Enter any positive number. > ");
    scanf("%d",&day);

    day %= 7;  // convert any number to 0 to 6.
    day += 1;  // we need number from 1 to 7 so.

    if(day == 1){
        printf("Sunday.");
    }
    
    else if(day == 2){
        printf("Monday.");
    }

    else if(day == 3){
        printf("Tuesday.");
    }

    else if(day == 4){
        printf("Wednesday.");
    }

    else if(day == 5){
        printf("Thursday.");
    }

    else if(day == 6){
        printf("Friday.");
    }

    else if(day == 7){
        printf("Saturday.");
    }

    else{
        printf("Something went wrong.");
    }


    return 0;
}

