#include <stdio.h>

int main() {
    int n = 100; // let upper value be 100.
    int i = 1; //initial value 1.
    // First run and then chick the condition.
    printf("Using do while loop.\n");
    do{
        printf("%d \n",i);
        i++;
    } while(i <= n);  

    printf("\n\n\nUsing while loop.\n");
    i = 1; //initial value 1.
    // First chick the condition and then run.
    while(i <= n){
        printf("%d \n",i);
        i++;
    }
    
    
    printf("\n\n\nUsing for loop.\n");
    for(i = 1; i <= n;i++ ){
        printf("%d\n",i);
    }

    return 0;
}
