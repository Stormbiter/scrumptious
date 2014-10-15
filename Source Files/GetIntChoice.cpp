/************************************************************************
* AUTHOR		: Scott Oberman
* STUDENT ID	: 271984
* Assignment #7	: Searching Linked Lists
* CLASS			: CS1B
* SECTION		: MW 10:00a - 11:00a
* DUE DATE		: 4/14/14
*************************************************************************/

#include "header.h"

/************************************************************************
*
* FUNCTION GetIntChoice
*________________________________________________________________________
* This function prompts the user for input of type int and lets the user
*	make such an input. The function checks if the integer is out of the
*	bounds of the choices and also checks if there is no input at all.
*	The function outputs an appropriate message for each case.
*________________________________________________________________________
* PRE-CONDITIONS
*	CHOICE_MIN: The smallest integer input allowed must be defined.
*	CHOICE_MAX: The largest integer input allowed must be defined.
*	PROMPT	  : The input prompt must be defined.
* POST-CONDITIONS
*	numChoice: The user's input choice will be returned.
* RETURNS -> intChoice
*************************************************************************/
int GetIntChoice(const int CHOICE_MIN, // CALC - The smallest choice that
									   //		  the user can input.
				 const int CHOICE_MAX, // CALC - The largest choice that
									   //		  the user can input.
				 const string PROMPT)  // OUT  - The prompt for what
									   //		 the user is inputting
									   //		 for.
{
	int intChoice; // IN   - The integer input of the user which acts
				   //		 as a response to the prompt.
	bool valid;	   // CALC - Determines whether intChoice is valid or
				   //		 or not.

	valid = true;

	//PROCESS: Do while intChoice is invalid, get input from the user
	//		   pertaining to prompt.
	do
	{
		// OUTPUT: Output the prompt for input.
		cout << PROMPT;

		// PROCESS: If the input for numChoice is not a number, output
		//			an error message indicating that input is not a
		//			number. Else, if numChoice does not fall into
		//			the range of acceptable numbers, output a message
		//			indicating so.
		if (!(cin >> intChoice))
		{
			cout << "**** Please input a NUMBER between " << CHOICE_MIN
				 << " and " << CHOICE_MAX << " ****" << endl << endl
				 << endl;
			
			// INPUT: Remove the error state from cin and clear the input
			//		  buffer.
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			valid = false;
		}
		else if (intChoice < CHOICE_MIN || intChoice > CHOICE_MAX)
		{
			cout << endl;
			cout << "**** The number " << intChoice
				 << " is an invalid entry." << endl;
			cout << "**** Please input a number between " << CHOICE_MIN
				<< " and " << CHOICE_MAX << endl << endl << endl;
			valid = false;
		}
		else
		{
			valid = true;
		}

	} while(!valid);

	// INPUT: Remove whitespace from the input buffer.
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// OUTPUT: Place an empty line under the last output.
	cout << endl;

	return intChoice;
}