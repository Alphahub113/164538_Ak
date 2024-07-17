/*
 * This program determines the ranges of char, short, int, and long variables, both signed and unsigned,
 * by printing appropriate values from standard headers and by direct computation.
 * Author: Pakki Akhil Kumar Patnaik
 * Created: 4 July, 2024
 * Modified: 4 July, 2024
*/

/* REQUIRED HEADER FILES */
#include <stdio.h>
#include <limits.h>

/* FUNCTION DECLARATIONS */
void print_ranges();

/* MAIN PROGRAM */
/*
 * main: This is the main function of the program.
*/
int main()
{
    printf("Ranges of standard data types:\n");
    print_ranges();

    return 0;
}
/* End main() */

/*
 * print_ranges: Print the ranges of char, short, int, and long variables.
*/
void print_ranges()
{
    // Using limits.h header for signed types
    printf("From limits.h header:\n");
    printf("Signed char:   %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Unsigned char: %d to %u\n", 0, UCHAR_MAX);
    printf("Signed short:   %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Unsigned short: %d to %u\n", 0, USHRT_MAX);
    printf("Signed int:   %d to %d\n", INT_MIN, INT_MAX);
    printf("Unsigned int: %d to %u\n", 0, UINT_MAX);
    printf("Signed long:   %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Unsigned long: %d to %lu\n", 0, ULONG_MAX);

    // Using direct computation for unsigned types
    printf("\nDirect computation for unsigned types:\n");
    printf("Unsigned char: 0 to %u\n", (unsigned char)(-1));
    printf("Unsigned short: 0 to %u\n", (unsigned short)(-1));
    printf("Unsigned int: 0 to %u\n", (unsigned int)(-1));
    printf("Unsigned long: 0 to %lu\n", (unsigned long)(-1));

    // Additional ranges for floating-point types
    printf("\nRanges of floating-point types:\n");
    printf("Float: %.10e to %.10e\n", FLT_MIN, FLT_MAX);
    printf("Double: %.10e to %.10e\n", DBL_MIN, DBL_MAX);
    printf("Long Double: %.10Le to %.10Le\n", LDBL_MIN, LDBL_MAX);
}
/* End print_ranges() */
