#include <stdio.h>

int main() {
    int n; // let n number of data
    int count = 0; // let the no of requred salary.
    
    printf("How many employed does your organization have? >");
    scanf("%d",&n);
    int num[n]; //let take n data.

    // To input salary from user.
    for (int i = 0; i < n; i++){
        printf("What's your salary? > ");
        scanf("%d",&num[i]);
    }
    // chick and count.
    for (int i = 0; i < 10; i++){
        if (20000 < num[i] && num[i] < 30000){
            count += 1;
        }
    }
    // print the result.
    printf("There are %d people in that salary range.",count);

    return 0;
}

