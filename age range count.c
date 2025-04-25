#include <stdio.h>

int main() {
    int num[10]; //let take 10 data.
    int count = 0; // let the no of requred age.

    // To input age from user.
    for (int i = 0; i < 10; i++){
        printf("What's your age? > ");
        scanf("%d",&num[i]);
    }
    // chick and count.
    for (int i = 0; i < 10; i++){
        if (20 < num[i] && num[i] < 30){
            count += 1;
        }
    }
    // print the result.
    printf("There are %d people in that age range.",count);

    return 0;
}

