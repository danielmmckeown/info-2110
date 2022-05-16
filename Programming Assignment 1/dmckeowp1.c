/* ---
Program File:  dmckeowp1.c
Author: Daniel McKeown
Date: 4 Feb 2022
Assignment: #1
Objective: This program calculates and prints the sum, difference, product, quotient, and remainder (modulus) of two integer numbers.
--- */

#include <stdio.h>
int main(void)
{
// Declare variables
    int num1, num2, sum, difference, product, quotient, remainder;

// Assign values and calculate math operations.
    num1 = 74; num2 = 39;

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    remainder = num1 % num2;

// Display integers used
    printf ("The two numbers used by this program are %i and %i.\n\n", num1, num2);

// Display results for math operations
    printf ("The sum is %i.\n", sum);
    printf ("The difference is %i.\n", difference);
    printf ("The product is %i.\n", product);
    printf ("The quotient is %i with a remainder of %i.\n\n", quotient, remainder);

// Display thank you message
    printf ("Thank you for using the program.\n"); 

    return 0;
} // end main

