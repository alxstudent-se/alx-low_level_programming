# 0x02. C - Functions, nested loops


---

### [0. _putchar](./0-_putchar_.c)
> Write a program that prints Holberton, followed by a new line.
```sh
#include "main.h"
/**
 * main - Prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}

```
### [1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game](./1-alphabet.c)
> Write a function that prints the alphabet, in lowercase, followed by a new line.
```sh
#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

```
### [2. 10 x alphabet](./2-print_alphabet_x10.c)
> Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
```sh
#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int n, co;

	co = 0;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}

```
### [3. islower](./3-islower.c)
> Write a function that checks for lowercase character.
```sh
#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

```
### [4. isalpha](./4-isalpha.c)
> Write a function that checks for alphabetic character.
```sh
#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 * @c: single letter input
 * Return: 1 if c is a letter (lower or uppercase), 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}

```
### [5. Sign](./5-sign.c)
> Write a function that prints the sign of a number.
```sh
#include "main.h"
/**
 * print_sign - a function that prints the sign of a number
 * @n: number input
 * Return: 1 prints '+' if n > 0, 0 prints '0' if n = 0, -1 prints '-' if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}

```
### [6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you](./6-abs.c)
> Write a function that computes the absolute value of an integer.
```sh
#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @ab: integer input
 * Return: absolute value of ab
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}

```
### [7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important ](./7-print_last_digit.c)
> Write a function that prints the last digit of a number.
```sh
#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: numbers last digit result
 * Return: value of the last digit
 */
int print_last_digit(int nld)
{
	int pld;

	pld = (nld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);
}

```
### [8. I'm federal agent Jack Bauer, and today is the longest day of my life](./8-24_hours.c)
> Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
```sh
#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * h = hour, m = minutes
 * / 10 allows second digit to rotate
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}

```
### [9. Learn your times table](./9-times_table.c)
> Write a function that prints the 9 times table, starting with 0.
```sh
#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int rone, cone, d;

	for (rone = 0; rone <= 9; rone++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cone = 1; cone <= 9; cone++)
		{
			d = (rone * cone);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (cone < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}

```
### [10. a + b](./10-add.c)
> Write a function that adds two integers and returns the result.
```sh
#include "main.h"
/**
 * add - a function that adds two integers and returns the result
 * @one: first number input
 * @two: second number input
 * Return: one + two
 */
int add(int one, int two)
{
	return (one + two);
}

```
### [11. 98 Battery Street, the OG](./11-print_to_98.c)
> Write a function that prints all natural numbers from n to 98, followed by a new line.
```sh
#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 * user inputs number prints to 98, regardless < 98 or > 98
 * @n: number input
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}

```

### [100. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself](./100-times_table.c)
> Write a function that prints the n times table, starting with 0.

Prototype: void print_times_table(int n);
If n is greater than 15 or less than 0 the function should not print anything
```sh
#include "main.h"
/**
 * print_times_table - Entry point
 * @n: input
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{

	return (0);
}

```
### [101. Nature made the natural numbers; All else is the work of women](./101-natural.c)
> Write a function that prints all natural numbers from n to 98, followed by a new line.
```sh
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	return (0);
}

```
### [102. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A](./102-fibonacci.c)
> Write a function that prints all natural numbers from n to 98, followed by a new line.
```sh
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	return (0);
}

```
### [103. Even Liber Abbaci](./103-fibonacci.c)
> Write a function that prints all natural numbers from n to 98, followed by a new line.
```sh
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	return (0);
}

```
### [104. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+](./104-fibonacci.c)
> Write a function that prints all natural numbers from n to 98, followed by a new line.
```sh
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	return (0);
}

```