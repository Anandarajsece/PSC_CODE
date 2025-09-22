//gets in C is unsafe and should be avoided. Use fgets instead.
#include <stdio.h>
int main() {
    char str[50];
    printf("Enter a string: ");
    // Using fgets instead of gets for safety
    if (fgets(str, sizeof(str), stdin) != NULL) {
        printf("You entered: %s", str);
    } else {
        printf("Error reading input.\n");
    }
    return 0;
}