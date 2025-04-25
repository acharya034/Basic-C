#include <stdio.h>

int main() {
    int n; // let n number of data
    
    printf("How many numbers you have? >");
    scanf("%d",&n);
    int num[n]; //let take n data.

    // To input number from user.
    for (int i = 0; i < n; i++){
        printf("Enter number %d: ? > ",i+1);
        scanf("%d",&num[i]);
    }
    // chick for ascending.
    for (int i = 0; i < n; i++){
        for(int j =i; j < n;j++){
            if (num[j] < num[i]){
                int temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
    }

    // print the result.
    printf("In ascending order: ");
    for(int i = 0; i < n; i++){
        printf("%d, ",num[i]);
    }
    
    // You can replet avobe process for descending too but reverse series is simpler.
    
    printf("In descending order: ");
    for(int i = n-1; i >= 0; i--){
        printf("%d, ",num[i]);
    }
    
    return 0;
}

