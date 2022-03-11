#include <stdio.h>

/**
 * main - alphabet in lowercase, followed by a new line.
 *
 * Always return(0)
 */

int main () {
   char ch='apri';

   for(ch = 'a' ; ch <= 'z' ; ch++) {
      putchar(ch);
   }
   
   return(0);
}
