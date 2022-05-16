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
    int numberOfGrades, i, grade;
    int gradeTotal = 0;
    float average;

    printf ("This program calculates the average of as many grades you wish to enter.\n\n");

    printf ("Please enter the number of grades to process: ");
    scanf ("%i", &numberOfGrades);

    printf ("Now enter the %i grades to be averaged.\n\n", numberOfGrades);
 
    for (i = 1; i <= numberOfGrades; ++i)
    {
        do {
        printf ("Enter grade #%i: ", i); 
        scanf  ("%i", &grade);
        if (grade < 0 || grade > 100)  
        {   
            printf ("*** Invalid entry. Grade must be 0 to 100. ***\n");
        }
        } while (grade < 0 || grade > 100);

        gradeTotal = gradeTotal + grade;
    } 

    average = (float) gradeTotal / numberOfGrades;

    printf ("The average of the %i grades entered is %.2f.\n", numberOfGrades, average); 

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
