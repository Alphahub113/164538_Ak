/*
 * This program copies its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\.
 * This makes tabs and backspaces visible in an unambiguous way.
 * Author: Pakki Akhil Kumar Patnaik
 * Created: 4 July, 2024
 * Modified: 4 July, 2024
*/

/* REQUIRED HEADER FILES */
#include <stdio.h>

/* MAIN PROGRAM */
/*
 * main: This is the main function of the program.
*/
int main()
{
    int c; // Variable to store each character read from input

    // Read characters from input until EOF is reached
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t"); // Replace tab with \t
        } else if (c == '\b') {
            printf("\\b"); // Replace backspace with \b
        } else if (c == '\\') {
            printf("\\\\"); // Replace backslash with \\
        } else {
            putchar(c); // Output the character as it is
        }
    }

    return 0;
}
/* End main() */
