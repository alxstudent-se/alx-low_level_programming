#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main () {
   char ch;

   for(ch = 'A' ; ch <= 'Z' ; ch++) {
      putchar(ch);
   }
    for(ch = 'a' ; ch <= 'z' ; ch++) {
      putchar(ch);
   } 
   return(0);
}