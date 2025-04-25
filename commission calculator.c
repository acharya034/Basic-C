//       sales         |  commission 
//     25000<=         |   15 %
//   15000<= & <25000  |   10 %
//   10000<= & <15000  |   5 %
//     <10000          |   0 %


#include <stdio.h>

int main() {
    float S;       // let sales.
    float C;       // let Commission.
    

    // Input
    printf("Enter Sale amount: ");
    scanf("%f", &S);

    // Chick and print.
    if(S >= 25000){
        C = .15 * S;
    }
    else if(S >= 15000 && S < 25000){
        C = .10 * S;
    }
    else if(S >= 10000 && S < 15000){
        C = .05 * S;
    }

    printf("You have got Rs. %.2f as a commission.",C);
    

    return 0;
}
