/*
 * Function lower converts upper case letters to lower case using conditional expression.
 * Author: Pakki Akhil Kumar Patnaik
 * Created: 4 July, 2024
 * Modified: 4 July, 2024
*/

/* REQUIRED HEADER FILES */
#include <stdio.h>

/* FUNCTION DECLARATIONS */
int lower(int c);

/* MAIN PROGRAM */
/*
 * main: Example usage of lower function.
*/
int main()
{
    char uppercase_letter = 'G'; // Example uppercase letter
    char lowercase_letter = lower(uppercase_letter);
    
    printf("Uppercase letter %c converted to lowercase: %c\n", uppercase_letter, lowercase_letter);
    
    return 0;
}
/* End main() */

/*
 * lower: Converts uppercase letter to lowercase using conditional expression.
*/
int lower(int c)
{
    return (c >= 'A' && c <= 'Z') ? (c + 'a' - 'A') : c;
}
/* End lower() */
