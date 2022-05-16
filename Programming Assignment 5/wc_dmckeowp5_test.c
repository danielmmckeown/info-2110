#include <stdio.h>

// Function "get_balance" asks user for inital balance and returns the value to main
float get_init_balance ()
{
	float starting_balance;
	do
	{
		printf ("Enter your current balance in dollars and cents: ");
		scanf ("%f",&starting_balance);
		if (starting_balance < 0)
			printf ("*** Beginning balance must be at least zero, please re-enter!\n\n"); // Display error message if the current balance is less than 0 dollars
	} while (starting_balance < 0); // End the loop if current balance is less than 0

	return starting_balance; 
} // End "get_init_balance" function

// Function "get_deposits" asks user for how many deposits they will be entering and returns the value to main
int get_num_deposits ()
{
	int deposit_nums;
	do
	{
		printf ("\nEnter the number of deposits (0 - 5): ");
		scanf ("%i",&deposit_nums);
		if ( deposit_nums < 0 || deposit_nums > 5)
			printf ("*** Invalid number of deposits, please re-enter.\n\n"); // Display error message if amount is less than 0 or over 5
	} while (deposit_nums < 0 || deposit_nums > 5); // End Do Loop if the amount is between 0 and 5

	return deposit_nums;
} // End "get_num_deposits"

// Function "get_withdrawals" asks user for how many withdrawals they will be entering and returns the value to main
int get_num_withdrawals ()
{
	int withdrawal_nums;
	do
	{
		printf ("\nEnter the number of deposits (0 - 5): ");
		scanf ("%i",&withdrawal_nums);
		if ( withdrawal_nums < 0 || withdrawal_nums > 5)
			printf ("*** Invalid number of deposits, please re-enter.\n\n"); // Display error message if amount is less than 0 or over 5
	} while (withdrawal_nums < 0 || withdrawal_nums > 5); // End Do Loop if the amount is between 0 and 5

	return withdrawal_nums;
} // End "get_num_withdrawal"

int main (void)
{
// Define variables
	int x, number_of_deposits, number_of_withdrawals;
	float deposits[5], withdrawals[5];
	float current_balance, initial_balance;
	float total_deposits = 0, total_withdrawals = 0;

// Display greeting

	printf ("Welcome to the Computer Banking System.\n\n");

// Prompt user for current balance
	initial_balance = get_init_balance ();

// Set current balance variable --> update the rest of the comments with this phrasing
	current_balance = initial_balance;

// Prompts the user to enter amount of deposits
	number_of_deposits = get_num_deposits ();

// Prompt the user to enter the amount of withdrawals
	number_of_withdrawals = get_num_withdrawals ();

// Display extra space
	printf ("\n");

// Prompt user to enter deposit amounts
	for (int x = 0; x < number_of_deposits; x++)
	{
		do
		{
			printf ("Enter the amount of deposit #%i: ", x + 1);
			scanf ("%f",&deposits[x]);
				if (deposits[x] <= 0)
					printf ("*** Deposit amount must be greater than zero. Please re-enter! ***\n"); /// Display error message if the deposit amount is not greater than 0
		} while (deposits[x] <= 0); // End Do Loop

//	total_deposits += deposits[x]; // Define "total_deposits" variable

	current_balance += deposits[x]; // Update current balance variable

	}	// End For loop

// Prompt user for withdrawal amounts
	for (int x = 0; x < number_of_withdrawals; x++)
	{
		do
		{
			printf ("Enter the amount of withdrawal #%i: ", x + 1);
			scanf ("%f",&withdrawals[x]);
				if (withdrawals[x] > current_balance)
					printf ("*** Withdrawal amount exceeds current balance. ***\n"); // Display error message if withdrawal amount exceeds current balance
				if (withdrawals[x] <= 0)
					printf ("*** Withdrawal amount must be greater than zero. Please re-enter! ***\n"); //Display error message if withdrawal amount is not greater than 0
		} while (withdrawals[x] > current_balance || withdrawals[x] <= 0); // End loop when amount is greater than 0 

//	total_withdrawals += withdrawals[x]; // Define "total_withdrawal" variable

	current_balance -= withdrawals[x]; // Define "balance" variable
	
		if (current_balance == 0)
		{
			printf ("\n *** Balance is now zero. No more withdrawals can be made at this time. ***\n"); // Display "Balance is now zero" message 
		}
	} // End For loop

// Calculate and display the closing balance

	printf ("\n*** The closing balance is $%.2f *** \n", current_balance);

	if (current_balance >= 5000.00)
		printf ("*** It's time to invest some money! *** \n\n");
	else if (current_balance >= 1500.00 && current_balance <= 49999.99)
		printf ("*** Maybe you should consider a CD. *** \n\n");
	else if (current_balance >= 1000.00 && current_balance <= 14999.99)
		printf ("*** Keep up the good work! *** \n\n");
	else
		printf ("*** Your balance is getting low! *** \n\n");

// Display bank statement
	printf (" *** Bank Statement ***\n");
	printf ("\nStarting Balance:$ %6.2f\n\n", current_balance);

	for (x = 0; x < number_of_deposits; x++)
	{
		printf ("Deposit #%i: %10.2f\n", x + 1, deposits[x]);
	} // End For Loop
	for ( x = 0; x < number_of_withdrawals; x++)
	{
		printf ("\nWithdrawal #%i: %10.2f", x + 1, withdrawals[x]);
	} //End For Loop

	printf ("\n\nEnding Balance is :$ %7.2f\n", current_balance);

	return 0;
}  // End main

