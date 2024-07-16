/*
 * This program prints all input lines that are longer than 80 characters.
 * Author: Pakki Akhil Kumar Patnaik
 * Created: 4 July, 2024
 * Modified: 4 July, 2024
*/

/* REQUIRED HEADER FILES */
#include <stdio.h>

/* MACROS DEFINITIONS */
#define MAX_LINE_LENGTH 1000   // Maximum length of a line
#define THRESHOLD 80           // Threshold length to print the line

/* FUNCTION DECLARATIONS */
int getline(char line[], int maxline);

/* MAIN PROGRAM */
/*
 * main: This is the main function of the program.
*/
int main()
{
    char line[MAX_LINE_LENGTH];  // Array to store the current input line

    // Read lines from input
    while (getline(line, MAX_LINE_LENGTH) > 0) {
        if (strlen(line) > THRESHOLD) {
            printf("%s", line);  // Print the line if it is longer than THRESHOLD
        }
    }

    return 0;
}
/* End main() */

/*
 * getline: Read a line into 'line', return length
*/
int getline(char line[], int maxline)
{
    int c, i;

    // Read characters until the end of the line or the maximum length is reached
    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    
    if (c == '\n') {
        line[i] = c;  // Include newline character
        ++i;
    }

    line[i] = '\0';  // Null-terminate the string
    return i;
}
/* End getline() */
