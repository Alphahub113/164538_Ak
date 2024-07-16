/*
 * This program prints a horizontal histogram of the lengths of words in its input.
 * Author: Pakki Akhil Kumar Patnaik
 * Created: 4 July, 2024
 * Modified: 4 July, 2024
*/

/* REQUIRED HEADER FILES */
#include <stdio.h>

/* MACROS DEFINITIONS */
#define MAX_WORD_LENGTH 20  // Maximum word length to be tracked
#define IN 1                // Inside a word
#define OUT 0               // Outside a word

/* MAIN PROGRAM */
/*
 * main: This is the main function of the program.
*/
int main()
{
    int c;                          // Variable to store each character read from input
    int state;                      // Variable to track whether inside or outside a word
    int word_length;                // Variable to track the current word length
    int lengths[MAX_WORD_LENGTH];   // Array to store the frequency of each word length

    // Initialize the lengths array
    for (int i = 0; i < MAX_WORD_LENGTH; ++i) {
        lengths[i] = 0;
    }

    state = OUT;  // Initialize the state to OUT
    word_length = 0;  // Initialize word length to 0

    // Read characters from input until EOF is reached
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                state = OUT;  // Mark end of word
                if (word_length < MAX_WORD_LENGTH) {
                    ++lengths[word_length];  // Increment the corresponding length counter
                }
                word_length = 0;  // Reset word length for the next word
            }
        } else {
            state = IN;  // Mark start of a new word
            ++word_length;  // Increment the length of the current word
        }
    }

    // Print the histogram
    printf("Histogram of word lengths:\n");
    for (int i = 1; i < MAX_WORD_LENGTH; ++i) {
        if (lengths[i] > 0) {
            printf("%2d: ", i);  // Print the word length
            for (int j = 0; j < lengths[i]; ++j) {
                putchar('#');  // Print the histogram bar
            }
            putchar('\n');  // Move to the next line
        }
    }

    return 0;
}
/* End main() */
