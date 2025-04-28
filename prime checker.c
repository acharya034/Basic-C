#include <stdio.h>

int main() {
    int num; // let input number be num.
    int i;

    printf("Enter a number. >");
    scanf("%d",&num);
    
    for(i = 2; i < num; i++){
        if(num % i == 0){
            printf("It's not a prime number."); // if any factor found then this set of code is run.
            break;
        }
    }

    if(i == num){
        printf("Yes its a prime number."); //if num is a prime then the value of i is max i.e num.
    }

    return 0;
}
