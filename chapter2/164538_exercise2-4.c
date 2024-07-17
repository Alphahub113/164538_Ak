/*
 * Function squeeze_alt deletes each character in s1 that matches any character in s2.
 * Author: Pakki Akhil Kumar Patnaik
 * Created: 4 July, 2024
 * Modified: 4 July, 2024
*/

/* REQUIRED HEADER FILES */
#include <stdio.h>

/* FUNCTION DECLARATIONS */
void squeeze_alt(char s1[], const char s2[]);

/* MAIN PROGRAM */
/*
 * main: Example usage of squeeze_alt function.
*/
int main()
{
    char str1[] = "hello";
    char str2[] = "el";
    
    squeeze_alt(str1, str2);
    printf("After squeezing characters in str2 from str1: %s\n", str1);
    
    return 0;
}
/* End main() */

/*
 * squeeze_alt: Delete each character in s1 that matches any character in s2.
*/
void squeeze_alt(char s1[], const char s2[])
{
    int i, j, k;
    int should_delete;

    for (i = j = 0; s1[i] != '\0'; i++) {
        should_delete = 0;
        for (k = 0; s2[k] != '\0'; k++) {
            if (s1[i] == s2[k]) {
                should_delete = 1;
                break;
            }
        }
        if (!should_delete) {
            s1[j++] = s1[i];
        }
    }
    s1[j] = '\0'; // Null-terminate the squeezed string
}
/* End squeeze_alt() */
