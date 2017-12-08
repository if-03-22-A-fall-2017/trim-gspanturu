/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: 2AHIF
 * ---------------------------------------------------------
 * Exercise Number: 6
 * Title:			trim_str.cpp
 * Author:			Gloria Sara Panturu
 * Due Date:		December 9, 2017
 * ----------------------------------------------------------
 */
#include "trim.h"
#include <stdio.h>

int main(int argc, char const *argv[]) {

  printf("There are %d Arguments\n", argc);

  for (int i = 0; i < argc; i++) {
    printf("%d. Argument: ", i+1 );
    printf("%s \n", argv[i] );
  }

  char trimmed[STRLEN] = "no content";
  trim(argv[1], trimmed);
  printf("Trimmed result: %s\n", trimmed);

  return 0;
}
