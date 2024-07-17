/*
 * This program converts an integer to a string in a specified base.
 * Author: Pakki Akhil Kumar Patnaik
 * Created: 9 July, 2024
 * Modified: 9 July, 2024
*/

/* REQUIRED HEADER FILES */
#include <stdio.h>

/* FUNCTION PROTOTYPES */
void reverseString(char str[]);
void integerToBaseString(int number, char buffer[], int base);

/* MAIN PROGRAM */
/*
 * main: This is the main function of the program.
*/
int main()
{
    int number = 255;  // The number to convert
    char buffer[20];   // Buffer to hold the resulting string
    int base = 16;     // The base for conversion

    // Convert the number to the specified base and store it in buffer
    integerToBaseString(number, buffer, base);

    // Print the result
    printf("Integer %d in base %d is represented as: %s\n", number, base, buffer);

    return 0;
}
/* End main() */

/*
 * integerToBaseString: This function converts an integer to a string in the specified base.
 * Parameters:
 *   - number: The integer to convert.
 *   - buffer: The string to store the result.
 *   - base: The base for conversion.
*/
void integerToBaseString(int number, char buffer[], int base)
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
        int digit = number % base;
        buffer[index++] = (digit > 9) ? (digit - 10 + 'A') : (digit + '0');
    } while ((number /= base) > 0);

    // Add negative sign if the number was negative
    if (isNegative) {
        buffer[index++] = '-';
    }
    buffer[index] = '\0';  // Null-terminate the string

    // Reverse the string to get the correct order
    reverseString(buffer);
}

/*
 * reverseString: This function reverses the string in place.
 * Parameters:
 *   - str: The string to reverse.
*/
void reverseString(char str[])
{
    int start = 0;
    int end = 0;
    char temp;

    // Find the end of the string
    while (str[end] != '\0') {
        end++;
    }
    end--;

    // Swap characters from the ends towards the center
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

