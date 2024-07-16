/*
 * This program copies its input to its output, replacing each string of one or more blanks with a single blank.
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
    int c;           // Variable to store each character read from input
    int last_c = 0;  // Variable to store the last character read

    // Read characters from input until EOF is reached
    while ((c = getchar()) != EOF) {
        if (c != ' ' || last_c != ' ') {
            putchar(c); // Output the character if it is not a blank or it is the first blank in a sequence
        }
        last_c = c; // Update last_c to the current character
    }

    return 0;
}
/* End main() */
