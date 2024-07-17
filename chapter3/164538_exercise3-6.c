/*
 * This program converts an integer to a string and pads it to a minimum field width.
 * Author: Pakki Akhil Kumar Patnaik
 * Created: 10 July, 2024
 * Modified: 10 July, 2024
*/

/* REQUIRED HEADER FILES */
#include <stdio.h>
#include <string.h>

/* FUNCTION PROTOTYPES */
void reverseString(char str[]);
void integerToStringWithWidth(int number, char str[], int minWidth);

/* MAIN PROGRAM */
/*
 * main: This is the main function of the program.
*/
int main()
{
    int number = 123;       // The number to convert
    char buffer[20];        // Buffer to hold the resulting string
    int minWidth = 10;      // The minimum field width

    // Convert the number to a string and pad it to the specified width
    integerToStringWithWidth(number, buffer, minWidth);

    // Print the result
    printf("Converted string: '%s'\n", buffer);

    return 0;
}
/* End main() */

/*
 * integerToStringWithWidth: This function converts an integer to a string and pads it to a specified width.
 * Parameters:
 *   - number: The integer to convert.
 *   - str: The string to store the result.
 *   - minWidth: The minimum field width.
*/
void integerToStringWithWidth(int number, char str[], int minWidth)
{
    int index = 0;  // Variable to store index
    int isNegative = 0;  // Variable to store sign

    // Record sign and make number positive if negative
    if (number < 0) {
        isNegative = 1;
        number = -number;
    }

    // Generate digits in reverse order
    do {
        str[index++] = number % 10 + '0';
    } while ((number /= 10) > 0);

    // Add negative sign if the number was negative
    if (isNegative) {
        str[index++] = '-';
    }

    // Add padding if necessary
    while (index < minWidth) {
        str[index++] = ' ';
    }

    str[index] = '\0';  // Null-terminate the string

    // Reverse the string to get the correct order
    reverseString(str);
}

/*
 * reverseString: This function reverses the string in place.
 * Parameters:
 *   - str: The string to reverse.
*/
void reverseString(char str[])
{
    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    // Swap characters from the ends towards the center
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

