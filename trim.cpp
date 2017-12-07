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

void trim 	(const char* source,char* trimmed_string){

   int length = strlen(source);
   if (length <= 0) {
     trimmed_string[0] = source[0];
     return;
   }

   bool is_first_letter = false;
   int trim_count_start = 0;
   for (int i = 0; i < length; i++) {

     if (source[i] != ' ' && is_first_letter == false) {
       is_first_letter = true;
       trim_count_start = i;
     }
   }

   is_first_letter = false;
   int trim_count_end = 0;
   for (int i = length - 1; i >= 0; i--) {

    if (source[i] != ' ' && is_first_letter == false) {
       is_first_letter = true;
       trim_count_end = i;
     }
   }
   int copy_count = 0;
   for (int i = trim_count_start; i < trim_count_end + 1; i++) {
     trimmed_string[copy_count] = source[i];
     copy_count++;
   }
}
