#include <stdio.h>

int main() {
    int num[7] = {5, 10, 20, 50, 100, 500, 1000}; //Random numbers.

    printf("There are 7 types of note in nepal, they are: ");
    for (int i = 0; i < 7; i++){
        printf("Rs.%d, ",num[i]); // To print.
                                  // Note that counting starts from 0.
    }
    
    return 0;
}

