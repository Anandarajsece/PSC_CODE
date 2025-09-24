//getch()
#include <stdio.h>
int main()
{
    char ch;
    printf("Press any key using getch(): ");
    ch = getchar(); // Reads a character from standard input
    printf("\nYou pressed: %c\n", ch);
    return 0;
}