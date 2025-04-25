#include <stdio.h>

int main() {
    for (int i = 1; i<10; i++){
        printf("%d, Hello World! \n",i);
        if (i == 5) {
            break; //When i = 5, break end your loop here. 
        }
    }

    return 0;
}

