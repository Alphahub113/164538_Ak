/*
 * Function setbits returns x with the n bits that begin at position p set to the rightmost n bits of y.
 * Author: Pakki Akhil Kumar Patnaik
 * Created: 4 July, 2024
 * Modified: 4 July, 2024
*/

/* REQUIRED HEADER FILES */
#include <stdio.h>

/* FUNCTION DECLARATIONS */
unsigned int setbits(unsigned int x, int p, int n, unsigned int y);

/* MAIN PROGRAM */
/*
 * main: Example usage of setbits function.
*/
int main()
{
    unsigned int x = 0b10101010; // Example x
    unsigned int y = 0b00001111; // Example y
    int p = 4; // Example p
    int n = 3; // Example n
    
    unsigned int result = setbits(x, p, n, y);
    printf("x after setting %d bits starting from position %d to the rightmost %d bits of y: %u\n", n, p, n, result);
    
    return 0;
}
/* End main() */

/*
 * setbits: Returns x with the n bits that begin at position p set to the rightmost n bits of y.
*/
unsigned int setbits(unsigned int x, int p, int n, unsigned int y)
{
    // Create a mask to clear the bits in x that will be replaced
    unsigned int mask = (~(~0u << n)) << (p - n + 1);

    // Clear the bits in x that will be replaced
    x = x & ~mask;

    // Extract the rightmost n bits of y and align them to position p
    unsigned int bits_from_y = (y & ~(~0u << n)) << (p - n + 1);

    // Combine bits_from_y with x to set the specified bits
    x = x | bits_from_y;

    return x;
}
/* End setbits() */
