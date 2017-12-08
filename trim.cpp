/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 6
 * Title:			trim.cpp
 * Author:			Gloria Sara Panturu
 * Due Date:		December 9, 2017
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
 #include "trim.h"
 #include <string.h>
 #include <stdio.h>
  int remove_blanks ( const char* source)
  {
    int count = 0;
    while (source[count] == ' ') {
      count++;
    }
    return count;
  }

 void trim	(	const char * source,char * trimmed_string)
 {
   int count = remove_blanks(source);

   for (int i = 0; i < STRLEN; i++) {
     if (!((source[count] == ' ' && source[count+1] == ' ') || (source[count] == ' ' && source[count+1] == '\0'))) {
       trimmed_string[i] = source[count];
       count++;
     }
  }
}
