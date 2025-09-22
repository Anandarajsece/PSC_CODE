//read string with whitespaces using scanf
#include <stdio.h>
int main() 
{
    char str[100];
    printf("Enter a string with spaces: ");
    scanf("%[^\n]s", str); // Read until newline
    printf("You entered: %s\n", str);
    return 0;
}