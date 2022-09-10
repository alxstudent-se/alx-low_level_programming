#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char o;

	for (o = 'z'; o >= 'a'; o--)
		putchar(o);
		putchar('\n');

	return (0);
}
