#include <stdio.h>

int main() 

{

/* Variable declarations*/  

     
    int count = 1, numbers;
    int total = 0;
    float average;
    


while (count <= 6) {

/*Introduction of the program to the user as well as programs function*/
    
    printf ("Welcome to the Sears mileage calculator.\n");
    
    printf ("This program will calculate the miles per gallon for you for three     tanks of gas after you have entered the gallons used and miles driven\n");

/* Prompt user for numbers of gallons and miles*/
    
    printf ("Enter the number of gallons used for tank one #%I\n", count);

    printf ("Ent the number of miles driven #%I\n",count);

    printf ("Enter the number of gallons used for tank two #%I\n", count);

    printf ("Enter the number of miles driven #%I\n", count);

    printf ("Enter the number of galloons used for tank three #%I\n", count);

    printf ("Enter the number of miles driven #%I\n", count);

    
    scanf ("%i", &numbers);

    total = total + numbers;
    
    count++; 

}
    average = total / 6;

    printf ("Your overall average miles per gallon for three tanks is %f\n", average);

    printf ("Goodbye");

    return 0;

}
