#include <stdio.h>

int main() {
    for (int i = 1; i<10; i++){
        if (i == 5) {
            printf("___NOTE HERE___\n"); // only for explane you.
            continue; //When i = 5, continue skip all remaining code. 
        }
        printf("%d, Hello World! \n",i);
    }

    return 0;
}

