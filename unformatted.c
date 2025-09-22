//unformatted input and output statements in c 
//getch() and getchar()
//getchar() is a standard library function to read a single character from standard input (keyboard).
//getch() is a non-standard function that reads a single character from the keyboard, but
//it does not echo the character to the console. It is commonly used in Windows-based systems.
#include <stdio.h>  
#include <conio.h> // For getch(), may not be available in all compilers
int main()  
{  
    char ch1, ch2;  
    
    printf("Enter a character using getchar(): ");  
    ch1 = getchar(); // Reads a character and echoes it to the console
    printf("You entered (getchar): %c\n", ch1);  
    
    printf("Press any key using getch(): ");  
    ch2 = getch(); // Reads a character without echoing it to the console
    printf("\nYou pressed (getch): %c\n", ch2);  
    
    return 0;  
}