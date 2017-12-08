/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 6
 * Title:			trim.h
 * Author:			Gloria Sara Panturu
 * Due Date:		December 9, 2017
 * ----------------------------------------------------------
 * Description:
 * Interface for trim
 * ----------------------------------------------------------
 */
 #ifndef TRIM_H
 #define TRIM_H

 #define STRLEN 16
 //if STRLEN < 16, then the program won't work because there isn't enough
 //space for all the characters that need to be saved
 void trim	(	const char * source, char * trimmed_string);
 int remove_blanks ( const char* source);
 #endif
