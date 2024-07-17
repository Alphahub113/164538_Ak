/*
 * Function any returns the first location in s1 where any character from s2 occurs, or -1 if s1 contains no characters from s2.
 * Author: Pakki Akhil Kumar Patnaik
 * Created: 4 July, 2024
 * Modified: 4 July, 2024
*/

/* REQUIRED HEADER FILES */
#include <stdio.h>

/* FUNCTION DECLARATIONS */
int any(const char s1[], const char s2[]);

/* MAIN PROGRAM */
/*
 * main: Example usage of any function.
*/
int main()
{
    char str1[] = "hello";
    char str2[] = "el";
    
    int location = any(str1, str2);
    if (location != -1) {
        printf("First occurrence of any character from str2 in str1 is at index: %d\n", location);
    } else {
        printf("No characters from str2 found in str1.\n");
    }
    
    return 0;
}
/* End main() */

/*
 * any: Returns the first location in s1 where any character from s2 occurs, or -1 if s1 contains no characters from s2.
*/
int any(const char s1[], const char s2[])
{
    int i, j;

    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                return i; // Return index of first occurrence
            }
        }
    }

    return -1; // No match found
}
/* End any() */
