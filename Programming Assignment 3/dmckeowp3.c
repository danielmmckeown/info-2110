/* ---
Program File:  dmckeowp3c
Author: Daniel McKeown
Date: 27 Feb 2022
Assignment: #3
Objective: This program calculates and prints the average of several grades entered by the user.
--- */

#include <stdio.h>
int main(void)
{

// Define variables
    int numberOfGrades, i, grade;
    int gradeTotal = 0;
    float average;

// Print program description
    printf ("This program calculates the average of as many grades you wish to enter.\n\n");

// Prompt user for number of grades the program will process
    printf ("Please enter the number of grades to process: ");
    scanf ("%i", &numberOfGrades);

// Prompt user to enter the number of grades to process
    printf ("\nNow enter the %i grades to be averaged.\n\n", numberOfGrades);

// Prompt user to enter grades
    for (i = 1; i <= numberOfGrades; ++i)
    {
        do {
        printf ("Enter grade #%i: ", i); 
        scanf  ("%i", &grade);
        if (grade < 0 || grade > 100)  // Check for grade between 1 and 100
        {   
            printf ("*** Invalid entry. Grade must be 0 to 100. ***\n"); // Display error message
        }
        } while (grade < 0 || grade > 100); //End If Loop

        gradeTotal = gradeTotal + grade; // Calculate grade totals
    } // End For Loop

    average = (float) gradeTotal / numberOfGrades; // Calculate grade average

// Display average grade
    printf ("\nThe average of the %i grades entered is %.2f.\n\n", numberOfGrades, average); 

// Display letter grade
    if ( average >= 90 ) 
        printf ("You have a letter grade of A.\n");
    else if ( average >= 80 ) 
        printf ("You have a letter grade of B.\n"); 
    else if ( average >= 70) 
        printf ("You have a letter grade of C.\n"); 
    else if ( average >= 60 ) 
        printf ("You have a letter grade of D.\n"); 
    else 
        printf ("You have a letter grade of F.\n");

    return 0;
} // end main

