#include <stdio.h>

int main() {
    int num[7] = {5, 10, 50, 22, 17, 33, 45}; //Random numbers.

    int smallest = num[0]; // let at first
    int greatest = num[0]; // let at first
    for (int i = 0; i < 7; i++){
        if(num[i] < smallest){
            smallest = num[i]; // For smallest number.
        }
        if(num[i] > greatest){
            greatest = num[i]; // For greatest number.
        }
    }
    printf("The smallest number is %d and greatest one is %d.",smallest,greatest);

    return 0;
}

