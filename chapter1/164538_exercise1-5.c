/*
 * This program converts temperatures from Celsius to Fahrenheit and prints the conversion table in reverse order with a heading.
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
    float celsius;  // Variable to store Celsius temperature
    float fahr;     // Variable to store Fahrenheit temperature
    float lower;    // Lower limit of temperature scale
    float upper;    // Upper limit of temperature scale
    float step;     // Step size for increments

    // Initialize the limits and step size
    lower = 0;    // Lower limit of temperature scale
    upper = 300;  // Upper limit of temperature scale
    step = 20;    // Step size

    // Print the heading of the table
    printf("%s\t%s\n", "Celsius", "Fahrenheit");
    printf("---------------------\n");

    // Initialize celsius to the upper limit
    celsius = upper;

    // Convert and print the temperatures from Celsius to Fahrenheit in reverse order
    while (celsius >= lower) {
        fahr = (celsius * 9.0 / 5.0) + 32; // Conversion formula
        printf("%7.1f %10.1f\n", celsius, fahr); // Print the values
        celsius = celsius - step; // Decrement celsius by step size
    }

    return 0;
}
/* End main() */
