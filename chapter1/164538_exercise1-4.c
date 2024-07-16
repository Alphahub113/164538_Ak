/*
 * This program to print the corresponding Celsius to Fahrenheit table.
 * Author: Pakki Akhil Kumar Patnaik
 * Created: 4 July, 2024
 * Modified: 4 July, 2024
*/

/* REQUIRED HEADER FILES */
#include <stdio.h>

/* MAIN PROGRAM */
/*
 * main: This is the main function of the program.
*/
int main()
{
    float fahr;    // Variable to store Fahrenheit temperature
    float celsius; // Variable to store Celsius temperature
    float lower;   // Lower limit of temperature scale
    float upper;   // Upper limit of temperature scale
    float step;    // Step size for increments

    // Initialize the limits and step size
    lower = 0;    // Lower limit of temperature scale
    upper = 300;  // Upper limit of temperature scale
    step = 20;    // Step size

    // Print the heading of the table
    printf("%s\t%s\n", "Celsius", "Fahrenheit");
    printf("---------------------\n");

    // Initialize celc to the lower limit
    celc = lower;

    // Convert and print the temperatures from Celcius to Fahrenheit
    while (celc <= upper) {
        fahr = (celcius * 9.0 / 5.0) +  32.0; // Conversion formula
        printf("%3.0f %6.1f\n", celcius, fahr); // Print the values
        celc = celc + step; // Increment celcius by step size
    }

    return 0;
}
/* End main() */

