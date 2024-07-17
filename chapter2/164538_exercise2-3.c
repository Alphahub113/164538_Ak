[08:04, 05/07/2024] Akhilkumar...: }
[08:04, 05/07/2024] Akhilkumar...: /*
 * Function htoi converts a string of hexadecimal digits (including optional 0x or 0X)
 * into its equivalent integer value.
 * Author: Pakki Akhil Kumar Patnaik
 * Created: 4 July, 2024
 * Modified: 4 July, 2024
*/

/* REQUIRED HEADER FILES */
#include <stdio.h>
#include <ctype.h>

/* FUNCTION DECLARATIONS */
int htoi(const char *s);

/* MAIN PROGRAM */
/*
 * main: Example usage of htoi function.
*/
int main()
{
    char hex_string1[] = "1A";
    char hex_string2[] = "0xFF";
    char hex_string3[] = "0x1A";
    
    printf("%s in hexadecimal is %d in decimal.\n", hex_string1, htoi(hex_string1));
    printf("%s in hexadecimal is %d in decimal.\n", hex_string2, htoi(hex_string2));
    printf("%s in hexadecimal is %d in decimal.\n", hex_string3, htoi(hex_string3));
    
    return 0;
}
/* End main() */

/*
 * htoi: Convert a string of hexadecimal digits into its equivalent integer value.
 * Returns the integer value.
*/
int htoi(const char *s)
{
    int i = 0;
    int result = 0;
    int sign = 1;

    // Skip optional 0x or 0X prefix
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        i = 2;

    // Process each character of the string
    for (; s[i] != '\0'; ++i) {
        char c = s[i];
        int digit_value;

        if (isdigit(c)) {
            digit_value = c - '0';
        } else if (c >= 'a' && c <= 'f') {
            digit_value = 10 + (c - 'a');
        } else if (c >= 'A' && c <= 'F') {
            digit_value = 10 + (c - 'A');
        } else {
            // Invalid character encountered
            printf("Invalid hexadecimal digit: %c\n", c);
            return 0;
        }

        result = result * 16 + digit_value;
    }

    return result;
}
/* End htoi() */
