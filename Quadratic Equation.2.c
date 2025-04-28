#include <stdio.h>
#include <math.h>

int main() {
    // this is quadarirc equation solver.

    int a, b, c;
    float x1, x2;
    printf("Fill this with your value. one by one followed by enter.");
    printf("\n _ x² + _ x + _ = 0\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(( b*b - 4*a*c ) < 0){
        printf("It is little complex. chick after 3 days of this code! comming soon.");
        
    }
    else{
        x1 = (-b -sqrt( b*b - 4*a*c )) / (2 * a); //thats the formula boss!
        x2 = (-b +sqrt( b*b - 4*a*c )) / (2 * a); //thats the formula boss!
        printf("The roots of the given equation are %.2f, %.2f",x1,x2);
    }



    return 0;
}
