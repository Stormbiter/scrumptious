/************************************************************************
* TEAM			: Scrumptious
* AUTHORS		: Scott Oberman, Luke Clements, Cyrus Riahi,
*				  and Adrian Sylvester
* STUDENT IDs	: 271984
* Class Project	: Class Project
* CLASS			: CS1C
* SECTION		: TTh 6:00p - 7:20p
* DUE DATE		: 12/9/14
*************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

using namespace std;

#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

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
						  const string SECTION);	 // CALC - The days
													 //		   and time
													 //		   of the
													 //		   class

#endif