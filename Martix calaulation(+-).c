#include <stdio.h>

int main() {
    int matrix1[3][3];
    int matrix2[3][3];
    int result[3][3];
    int op;

    printf("Options:\n\t1> Addition. \n\t2>subtraction\n");
    printf("What's your option: >");
    scanf("%d",&op);

    printf("Enter the value of matrix.\n");

    printf("For matrix 1:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Enter the value on %d,%d :",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("For matrix 2:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Enter the value on %d,%d :",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }

    if(op == 1){
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                result[i][j] = matrix1[i][j] + matrix2[i][j];
            }   
        }
    }

    else if(op == 2){
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                result[i][j] = matrix1[i][j] - matrix2[i][j];
            }   
        }
    }

    // To print result.
    if(op == 1){
        for(int i = 0; i < 3; i++){
            printf("|");
            for(int j = 0; j < 3; j++){
                printf(" %d |",result[i][j]);
            }   
            printf("\n");
        }
    }
    return 0;
}
