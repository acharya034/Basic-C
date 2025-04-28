#include <stdio.h>

int main() {
    int num; // let input number be num.
    int factorial = 1;

    printf("Enter a number. >");
    scanf("%d",&num);

    for(num; num > 0; num--){
        factorial *= num;
        printf("%d ",num);
        if(num > 1){
            printf("X ");
        }
    }
    printf("= %d",factorial);

    return 0;
}
