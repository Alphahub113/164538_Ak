 * This program reverses its input a line at a time using a function reverse(s) to reverse a character string s.
 * Author: Pakki Akhil Kumar Patnaik
 * Created: 4 July, 2024
 * Modified: 4 July, 2024
*/

/* REQUIRED HEADER FILES */
#include <stdio.h>
#include <string.h>

/* MACROS DEFINITIONS */
#define MAX_LINE_LENGTH 1000  // Maximum length of a line

/* FUNCTION DECLARATIONS */
void reverse(char s[]);
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
        reverse(line);  // Reverse the line
        printf("%s", line);  // Print the reversed line
    }

    return 0;
}
/* End main() */

/*
 * reverse: Reverse the character string s
*/
void reverse(char s[])
{
    int i, j;
    char temp;

    // Find the length of the string
    int length = strlen(s);

    // Swap characters from start to middle
    for (i = 0, j = length - 1; i < j; ++i, --j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

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
