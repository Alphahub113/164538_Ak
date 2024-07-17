/*
 * This program contains functions to convert characters into visible escape sequences
 * and vice versa.
 * Author: Pakki Akhil Kumar Patnaik
 * Created: 9 July, 2024
 * Modified: 9 July, 2024
 */

/* REQUIRED HEADER FILES */
#include <stdio.h>

/* FUNCTION DEFINITIONS */

/*
 * escape: Converts characters like newline and tab into visible escape sequences.
 * Parameters:
 *      destination - the destination string
 *      source - the source string
 */
void escape(char destination[], const char source[])
{
    int sourceIndex = 0;  // Source string index
    int destIndex = 0;    // Destination string index
    
    // Iterate through each character in the source string
    while (source[sourceIndex] != '\0') {
        switch (source[sourceIndex]) {
            case '\n':
                destination[destIndex++] = '\\';
                destination[destIndex++] = 'n';
                break;
            case '\t':
                destination[destIndex++] = '\\';
                destination[destIndex++] = 't';
                break;
            default:
                destination[destIndex++] = source[sourceIndex];
                break;
        }
        sourceIndex++;
    }
    destination[destIndex] = '\0';  // Null-terminate the destination string
}

/*
 * unescape: Converts escape sequences into the real characters.
 * Parameters:
 *      destination - the destination string
 *      source - the source string
 */
void unescape(char destination[], const char source[])
{
    int sourceIndex = 0;  // Source string index
    int destIndex = 0;    // Destination string index
    
    // Iterate through each character in the source string
    while (source[sourceIndex] != '\0') {
        if (source[sourceIndex] == '\\') {
            switch (source[++sourceIndex]) {
                case 'n':
                    destination[destIndex++] = '\n';
                    break;
                case 't':
                    destination[destIndex++] = '\t';
                    break;
                default:
                    destination[destIndex++] = '\\';
                    destination[destIndex++] = source[sourceIndex];
                    break;
            }
        } else {
            destination[destIndex++] = source[sourceIndex];
        }
        sourceIndex++;
    }
    destination[destIndex] = '\0';  // Null-terminate the destination string
}

/* MAIN PROGRAM */
/*
 * main: Entry point of the program.
 */
int main()
{
    char originalString[] = "Hello\tWorld\nThis is a test.";
    char escapedString[100];  // Ensure the destination array is large enough
    char unescapedString[100];

    // Convert to visible escape sequences
    escape(escapedString, originalString);
    printf("Escaped: %s\n", escapedString);

    // Convert back to real characters
    unescape(unescapedString, escapedString);
    printf("Unescaped: %s\n", unescapedString);

    return 0;
}
/* End main() */

