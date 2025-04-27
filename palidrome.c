
#include <stdio.h>
#include <string.h>

int main() {
    char txt[10]; // variable to store input text (max 9 characters + null terminator)

    printf("Enter any text: ");
    scanf("%9s", txt); // Limit input to 9 character.

    int length = strlen(txt);
    char rev[10]; // Buffer to store reversed text

    for (int i = 0; i < length; i++) {
        rev[i] = txt[length - 1 - i];
    }
    rev[length] = '\0'; // Add null terminator at the end

    if(strcmp(txt,rev)==0){
        printf("yes, it is palindrome");
    }
    else{
        printf("No, it isn't palindrome");
        
    }
    return 0;
}
