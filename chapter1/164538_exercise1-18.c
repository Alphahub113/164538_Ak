/*
 * This program removes trailing blanks and tabs from each line of input, and deletes entirely blank lines.
 * Author: Pakki Akhil Kumar Patnaik
 * Created: 4 July, 2024
 * Modified: 4 July, 2024
*/

/* REQUIRED HEADER FILES */
#include <stdio.h>

/* MACROS DEFINITIONS */
#define MAX_LINE_LENGTH 1000  // Maximum length of a line

/* FUNCTION DECLARATIONS */
int getline(char line[], int maxline);
void remove_trailing_blanks_tabs(char line[]);

/* MAIN PROGRAM */
/*
 * main: This is the main function of the program.
*/
int main()
{
    char line[MAX_LINE_LENGTH];  // Array to store the current input line

    // Read lines from input
    while (getline(line, MAX_LINE_LENGTH) > 0) {
        remove_trailing_blanks_tabs(line);  // Remove trailing blanks and tabs
        if (line[0] != '\0') {  // Print the line if it is not entirely blank
            printf("%s", line);
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

/*
 * remove_trailing_blanks_tabs: Remove trailing blanks and tabs from a line
*/
void remove_trailing_blanks_tabs(char line[])
{
    int i = 0;

    // Find the end of the line
    while (line[i] != '\0') {
        ++i;
    }
    --i;  // Step back from the null terminator

    // Remove trailing blanks and tabs
    while (i >= 0 && (line[i] == ' ' || line[i] == '\t' || line[i] == '\n')) {
        line[i] = '\0';
        --i;
    }

    // Add newline if necessary
    if (line[0] != '\0' && line[i + 1] == '\0') {
        line[++i] = '\n';
        line[++i] = '\0';
    }
}
/* End remove_trailing_blanks_tabs() */
