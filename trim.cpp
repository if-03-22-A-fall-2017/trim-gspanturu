/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
 #include "trim.h"
 #include <string.h>
 #include <stdio.h>
 void trim	(	const char * source,char * trimmed_string)
 {
   int count = 0;
   while (source[count] == ' ') {
     count++;
   }
   for (int i = 0; i < STRLEN; i++) {
      trimmed_string[i] = source[count];
      count++;
    }
 }
