/************************************************************************
* AUTHOR		: Scott Oberman
* STUDENT ID	: 271984
* Assignment #8 :
* CLASS			: CS1C
* SECTION		: TTh 6:00p - 7:20p
* DUE DATE		: 10/14/14
*************************************************************************/

#include "header.h"

/************************************************************************
*
* FUNCTION CreateClassHeading
*________________________________________________________________________
* This function takes all of the relevant information about the team
*	for this project like name of team, name of students, class name, and
*	class days and times. This information is placed in a string and
*	returned.
*________________________________________________________________________
* PRE-CONDITIONS
*	TEAM_NAME	: The name of the team must be defined.
*	STUDENT_NAME: The name of the student must be defined.
*	CLASS_NAME	: The name of the class must be defined.
*	SECTION		: The days and times of the class must be defined.
*	WORK_TYPE	: Whether the work is an assignment or lab must be
*				  defined.
*	WORK_NUM	: The work number must be defined.
*	WORK_NAME	: The name of the work must be defined.
*
* POST-CONDITIONS
*	classHeading: The class heading is stored in classHeading.
* RETURNS -> classHeading
*************************************************************************/
string CreateClassHeading(const string TEAM_NAME,	 // CALC - The name of
													 //		   the team.
						  const string STUDENT_NAMES,// CALC - The name
													 //		   of the
													 //		   students who
													 //		   made the
													 //		   program.
						  const string CLASS_NAME,	 // CALC - The name of
													 //		   the class.
						  const string SECTION)		 // CALC - The days
													 //		   and time
													 //		   of the
													 //		   class
{
	/*************************************************
	* CONSTANTS
	*
	*	WIDTH: Width of the section fo two lines that
	*		   includes class and section outputs.
	**************************************************/
	const int WIDTH = 14;

	ostringstream out;	 // OUT - The variable holding the class header.
	string classHeading; // OUT - String analog of out.

	// OUTPUT: Output the class heading
	out << left;
	out << "*********************************************************\n";
	out << "* " << setw(WIDTH) << "TEAM" << ": " << TEAM_NAME << '\n';
	out << "* PROGRAMMED BY : " << STUDENT_NAMES << '\n';
	out << "* " << setw(WIDTH) << "CLASS" << ": " << CLASS_NAME << '\n';
	out << "* " << setw(WIDTH) << "SECTION" << ": " << SECTION << '\n';
	out << "* ";

	out << "CLASS PROJECT" << endl;
	out << "*********************************************************\n\n";
	out << right;

	// PROCESS: Convert the ostringstream to a string.
	classHeading = out.str();

	return classHeading;
}
