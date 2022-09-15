#include "main.h"

/**
 * print_diagnol - Draws diagnol line on the terminal
 * @n: input number of times '\' should be printed
 *
 * Return: A diagnol
 */
void print_diagonal(int n)
{
	int l, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= n; l++)
		{
			for (sp = 1; sp < l; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
