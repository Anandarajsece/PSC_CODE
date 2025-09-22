//read string with white spaces using fgets 
#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter a string with spaces: ");
    fgets(str, sizeof(str), stdin); // Read until newline or EOF
    printf("You entered: %s", str);
    return 0;
}