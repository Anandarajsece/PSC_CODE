#include <stdio.h>

int main() {
    
    int integer_val;
    float float_val;
    char char_val;

    printf("Enter an integer, a float, and a character: ");
    
    scanf("%d %f %c", &integer_val, &float_val, &char_val);
    printf("You entered: int=%d, float=%.2f, char=%c\n\n", integer_val, float_val, char_val);

    printf("Enter another character: ");
   
    printf("You entered: %c\n\n", char_val);

    char str[10];
    printf("Enter a string (less than 10 characters): ");
    
    scanf("%9s", str); // Reads a maximum of 9 characters to leave space for the null terminator '\0'.
    printf("You entered: %s\n\n", str);

    char letters[20];
    printf("Enter only letters (a-z, A-Z): ");
    
    scanf("%19[a-zA-Z]", letters);
    printf("You entered: %s\n\n", letters);

    char sentence[50];
    printf("Enter a sentence that ends with a period '.': ");
    // This will read everything until a period is found.
    scanf(" %49[^.]", sentence);
    printf("You entered: %s\n\n", sentence);

    // 6. Checking the return value of scanf
    // scanf returns the number of items successfully read.
    int a, b;
    printf("Enter two integers: ");
    int items_read = scanf("%d %d", &a, &b);
    if (items_read == 2) {
        printf("Successfully read 2 integers: %d and %d\n", a, b);
    } else {
        printf("Error: Failed to read two integers. scanf returned %d\n", items_read);
    }

    return 0;
}
