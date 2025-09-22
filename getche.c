//getche()
// getche() reads a single character from the keyboard and echoes it to the console.
#include <stdio.h>
#include <conio.h> // For getche(), may not be available in all compilers
int main() {
    char ch;
    printf("Press any key using getche(): ");
    ch = getche(); // Reads a character and echoes it to the console
    printf("\nYou pressed: %c\n", ch);
    return 0;
}