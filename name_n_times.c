#include <stdio.h>
#include <string.h>

int main() {
    char name[20];
    int n;

    printf("Whats your name? \n\t-> ");
    scanf("%s",name);
    
    printf("How many times you want to print your name? \n\t-> ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        printf("%s\n",name);
    }


    return 0;
}
