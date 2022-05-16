/* ---
Program File:  dmckeowp2c
Author: Daniel McKeown
Date: 20 Feb 2022
Assignment: #2
Objective: This program determines the miles per gallon for 3 tanks of gasoline that a user fills in his/her car.
--- */

#include <stdio.h>
int main(void)
{

// Define variables
    int  gal, tank;
    float miles, mpg;
    float totalMiles =0; 
    float totalGallons = 0;
    float avgMPG;

// Print welcome message
    printf ("Welcome to the mileage calculator.\n\n"); 

// Print program description
    printf ("This program will calculate the miles per gallon for you for three tanks of gas after you have entered the gallons used and miles driven.\n\n");

    for (tank = 1; tank <= 3; tank = tank + 1, gal = 0,  miles = 0, mpg = 0) // For Loop expression statements
    {
        printf ("Enter the number of gallons used for Tank #%i: ", tank); // Prompt user for number of gallons used
        scanf  ("%i", &gal);
        printf ("Enter the number of miles driven for Tank #%i: ", tank); // Prompt user for number of miles driven
        scanf  ("%f", &miles);
        mpg = miles / gal;
        printf ("*** The miles per gallon for this tank is %.2f.\n\n", mpg); // Display tank's mpg for user
    }

// Display overall average miles per gallon
    avgMPG = totalMiles / totalGallons;
    printf ("Your overall average miles per gallon for three tanks is %.2f.\n\n", avgMPG);

// Display thank you message
    printf ("Thank you for using the program. Goodbye.\n"); 

    return 0;
} // end main

