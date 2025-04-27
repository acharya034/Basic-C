#include <stdio.h>

int main() {
    
    int matrix[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Value on %d,%d: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    
    for(int i = 0; i < 3; i++){
        printf("|");
        for(int j = 0; j < 3; j++){
            printf(" %d |",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

