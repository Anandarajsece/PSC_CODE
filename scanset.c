//example code for scanset in C [A-Z, a-z, 0-9, space and special characters]
//generate different types of characters using scanset
#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string (can include spaces and special characters): ");
    scanf("%[A-Za-z0-9 !@#$%^&*()_+]", str); // Read until a character not in the set is found
    printf("You entered: %s\n", str);
    return 0;
}
