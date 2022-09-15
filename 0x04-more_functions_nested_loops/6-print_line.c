#include "main.h"

/**
 * print_line - Draws straight line in the terminal
 * @n: number of lines character should be printed
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= n; l++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
