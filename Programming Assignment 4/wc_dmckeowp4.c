#include <stdio.h>
int main(void)
{
// Define variables
	int x, number_of_deposits, number_of_withdrawals;
	float deposits[5], withdrawals[5];
	float current_balance, balance;
	float total_deposits = 0, total_withdrawals = 0;

// Display greeting

	printf ("Welcome to the Computer Banking System.\n\n");

// Prompt user for current balance 
	do
	{
		printf ("Enter your current balance in dollars and cents: ");
		scanf ("%f",&current_balance);

		if (current_balance < 0)
			printf ("*** Beginning balance must be at least zero, please re-enter!\n\n"); // Display error message if the current balance is less than 0 dollars
	} while (current_balance < 0); // End the loop if current balance is less than 0

// Prompts the user to enter amount of deposits
	do
	{
		printf ("\nEnter the number of deposits (0 - 5): ");
		scanf ("%i",&number_of_deposits);

		if ( number_of_deposits < 0 || number_of_deposits > 5)
			printf ("*** Invalid number of deposits, please re-enter.\n\n"); // Display error message if amount is less than 0 or over 5
	} while (number_of_deposits < 0 || number_of_deposits > 5); // End Do Loop if the amount is between 0 and 5


// Prompt the user to enter the amount of withdrawals
	do
	{
		printf ("\nEnter the number of withdrawals (0 - 5): ");
		scanf ("%i",&number_of_withdrawals);

		if (number_of_withdrawals < 0 || number_of_withdrawals > 5)
			printf ("Invalid number of withdrawals, please re-enter!\n\n"); // Display error message for invalid number of withdrawals
	} while (number_of_withdrawals < 0 || number_of_withdrawals > 5); // End loop if the amount of withdrawals is between 0 and 5

// Display extra space
	printf ("\n");

// Prompt user to enter deposit amounts
	for (x = 1; x <= number_of_deposits; x++)
	{
		do
		{
			printf ("Enter the amount of deposit #%i: ", x);
			scanf ("%f",&deposits[x]);
				if (deposits[x] <= 0)
					printf ("*** Deposit amount must be greater than zero. Please re-enter! ***\n"); /// Display error message if the deposit amount is not greater than 0
		} while (deposits[x] <= 0); // End Do Loop
	
	total_deposits = total_deposits + deposits[x]; // Define "total_deposits" variable

	}	// End For loop

// Prompt user for withdrawal amounts
	for (x = 1; x <= number_of_withdrawals; x++)
	{
		do
		{
			printf ("Enter the amount of withdrawal #%i: ", x);
			scanf ("%f",&withdrawals[x]);

				if (withdrawals[x] > current_balance)
					printf ("*** Withdrawal amount exceeds current balance. ***\n"); // Display error message if withdrawal amount exceeds current balance
				else
				if (withdrawals[x] <= 0)
					printf ("*** Withdrawal amount must be greater than zero. Please re-enter! ***\n"); //Display error message if withdrawal amount is not greater than 0
		} while (withdrawals[x] > current_balance || withdrawals[x] <= 0); // End loop when amount is greater than 0 

	total_withdrawals = total_withdrawals + withdrawals[x]; // Define "total_withdrawal" variable

	balance = current_balance - total_withdrawals + total_deposits; // Define and calculate "balance" variable (ensures withdrawal amount is less than the balance)
	
		if (balance == 0)
		{
			printf ("\n *** Balance is now zero. No more withdrawals can be made at this time. ***\n"); // Display "Balance is now zero" message 
		}

	number_of_withdrawals = x;
	
	} // End For loop

// Calculate and display the closing balance

	printf ("\n*** The closing balance is $%.2f *** \n", balance);

	if (balance >= 5000.00)
		printf ("*** It's time to invest some money! *** \n\n");
	else if (balance >= 1500.00 && balance <= 49999.99)
		printf ("*** Maybe you should consider a CD. *** \n\n");
	else if (balance >= 1000.00 && balance <= 14999.99)
		printf ("*** Keep up the good work! *** \n\n");
	else
		printf ("*** Your balance is getting low! *** \n\n");

// Display bank statement
	printf (" *** Bank Statement ***\n");
	printf ("\nStarting Balance:$ %6.2f\n\n", current_balance);

	for (x = 1; x <= number_of_deposits; x++)
	{
		printf ("Deposit #%i: %10.2f\n", x, deposits[x]);
	}
	for ( x = 1; x<= number_of_withdrawals; x++)
	{
		printf ("\nWithdrawal #%i: %10.2f", x, withdrawals[x]);
	}

	printf ("\n\nEnding Balance is :$ %7.2f\n", balance);

	return 0;
}  // End main

