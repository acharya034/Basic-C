#include <stdio.h>

int main() {
    for (int i = 1; i<10; i++){
        if (i == 5) {
            goto my_name; // This bring you to below my_name.
        }
        printf("%d, Hello World! \n",i);
    }
    my_name:
    printf("Dire Wolf"); // Since, There is nothing after this so your code end here.

    return 0;
}

