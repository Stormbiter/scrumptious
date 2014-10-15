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
* FUNCTION GetStrChoice
*________________________________________________________________________
* This function prompts the user for input of type string and then
*	allows the user to make such input.
*________________________________________________________________________
* PRE-CONDITIONS
*	PROMPT	  : The input prompt must be defined.
* POST-CONDITIONS
*	strChoice: The user's input choice will be returned.
* RETURNS -> strChoice
*************************************************************************/

string GetStrChoice(const string PROMPT) // OUT - The prompt for what the
										 //		  user is inputting for.
{

	string strChoice; // IN   - The string input of the user.

	// OUTPUT: Output the prompt for input.
	cout << PROMPT;

	// INPUT: Input the string of the user.
	getline(cin, strChoice);

	// OUTPUT: Place an empty line under the last output.
	cout << endl;

	return strChoice;
}