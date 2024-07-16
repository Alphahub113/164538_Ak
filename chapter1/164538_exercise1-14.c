 /* 
 * This program prints a horizontal histogram of the frequencies of different characters in its input.
 * Author: Pakki Akhil Kumar Patnaik
 * Created: 4 July, 2024
 * Modified: 4 July, 2024
*/

/* REQUIRED HEADER FILES */
#include <stdio.h>

/* MACROS DEFINITIONS */
#define MAX_CHAR 128  // Maximum number of different characters (ASCII)

* MAIN PROGRAM */
/*
 * main: This is the main function of the program.
*/
int main()
{
    int c;                      // Variable to store each character read from input
    int char_count[MAX_CHAR];   // Array to store the frequency of each character

    // Initialize the char_count array
    for (int i = 0; i < MAX_CHAR; ++i) {
        char_count[i] = 0;
    }

    // Read characters from input until EOF is reached
    while ((c = getchar()) != EOF) {
        if (c < MAX_CHAR) {
            ++char_count[c];  // Increment the corresponding character counter
        }
    }

    // Print the histogram
    printf("Histogram of character frequencies:\n");
    for (int i = 0; i < MAX_CHAR; ++i) {
        if (char_count[i] > 0) {
            if (i == '\n') {
                printf("\\n: ");
            } else if (i == '\t') {
                printf("\\t: ");
            } else if (i == ' ') {
                printf("space: ");
            } else {
                printf("%c: ", i);  // Print the character
            }
            for (int j = 0; j < char_count[i]; ++j) {
                putchar('#');  // Print the histogram bar
            }
            putchar('\n');  // Move to the next line
        }
    }

    return 0;
}
/* End main() */
