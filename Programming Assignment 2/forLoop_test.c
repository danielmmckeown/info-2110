#include <stdio.h>
 int main (void)
{
    int  gal, tank;
	float miles, mpg, totalMiles, totalGallons, avgMPG;

    for (tank = 1; tank <= 3; tank = tank + 1, gal = 0,  miles = 0, mpg = 0) 
    {
        printf ("Enter the number of gallons used for Tank #%i: ", tank);
        scanf  ("%i", &gal);
        printf ("Enter the number of miles driven for Tank #%i: ", tank);
        scanf  ("%f", &miles);
        mpg = miles / gal;
        printf ("*** The miles per gallon for this tank is %f.\n", mpg);
    }
    avgMPG = totalMiles / totalGallons;
    printf ("Your overall average miles per gallon for three tanks is %f.\n\n", avgMPG);
 return 0;
}
