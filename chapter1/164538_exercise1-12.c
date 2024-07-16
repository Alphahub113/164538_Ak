/*
 * This program reads input and prints each word on a new line.
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
    int c;        // Variable to store each character read from input
    int in_word;  // Flag to track if we are inside a word

    in_word = 0;  // Initialize the in_word flag to false (not in a word)

    // Read characters from input until EOF is reached
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (in_word) {
                putchar('\n'); // End the current word and print a newline
                in_word = 0;   // Set the in_word flag to false
            }
        } else {
            putchar(c); // Print the character as part of a word
            in_word = 1; // Set the in_word flag to true
        }
    }

    return 0;
}
/* End main() */
