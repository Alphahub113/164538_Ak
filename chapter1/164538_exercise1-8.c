/*
 * This program counts the number of blanks, tabs, and newlines in the input.
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
    int c;            // Variable to store each character read from input
    int blanks = 0;   // Variable to count blanks
    int tabs = 0;     // Variable to count tabs
    int newlines = 0; // Variable to count newlines

    // Read characters from input until EOF is reached
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++blanks;   // Increment blanks count if character is a blank
        } else if (c == '\t') {
            ++tabs;     // Increment tabs count if character is a tab
        } else if (c == '\n') {
            ++newlines; // Increment newlines count if character is a newline
        }
    }

    // Print the counts of blanks, tabs, and newlines
    printf("Blanks: %d\n", blanks);
    printf("Tabs: %d\n", tabs);
    printf("Newlines: %d\n", newlines);
