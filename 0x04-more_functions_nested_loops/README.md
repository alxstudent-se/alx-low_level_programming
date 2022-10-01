# C More functions and nested loops

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://github.com/alxstudent-se/alx-system_engineering-devops.git)


#### main.h
>Header File
```sh
int _putchar(char c);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);

```

#### 0-isupper.c
>Write a function that checks for uppercase character.

*    Prototype: int _isupper(int c);
*    Returns 1 if c is uppercase
*    Returns 0 otherwise

```sh
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 *
 * Return: 1 if character is uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

```


#### 1-isdigit.c
>Write a function that checks for a digit (0 through 9).

*    Prototype: int _isdigit(int c);
*    Returns 1 if c is a digit
*    Returns 0 otherwise

```sh
#include "main.h"

/**
 * _isdigit - checks digit 0-9
 * @c: the character to be checked
 *
 * Return: 1 if c is digit else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

```


#### 2-mul.c
>Write a function that multiplies two integers.

*    Prototype: int mul(int a, int b);

```sh
#include "main.h"

/**
 * mul - Multiplies two integers
 * @a: first integer to multiply by
 * @b: second integer to multiply by
 *
 * Return:Always 0
 */
int mul(int a, int b)
{
	return (a * b);
}

```


#### 3-print_numbers.c
>Write a function that prints the numbers, from 0 to 9, followed by a new line.

*    Prototype: void print_numbers(void);
*    You can only use _putchar twice in your code

```sh
#include "main.h"

/**
 * print_numbers - Prints the numbers 0-9 followed by \n
 *
 * Return: 0-9 followed by newline
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');

	_putchar('\n');
}

```



#### 4-print_most_numbers.c
>Write a function that prints the numbers, from 0 to 9, followed by a new line.

*    Prototype: void print_most_numbers(void);
*    Do not print 2 and 4
*    You can only use _putchar twice in your code

```sh
#include "main.h"

/**
 * print_most_numbers - Prints numbers 0-9 except 2,4
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if ((num == 2) || (num == 4))
			continue;
		else
			_putchar(num + '0');
	}
	_putchar('\n');
}

```


#### 5

```sh
5-more_numbers.c
#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0-14
 */
void more_numbers(void)
{
	int i, count;

	for (count = 0; count < 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
```


#### 6-print_line.c
```sh

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
```



#### 7-print_diagonal.c

```sh
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
```



#### 8-print_square.c

```sh
#include "main.h"

/**
 * print_square - Prints a square followed by newline
 * @size: size of both length and width
 *
 * Return: Asquare made of #
 */
void print_square(int size)
{
	int co, ro;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= size; co++)
		{
			_putchar('#');
			for (ro = 2; ro <= size; ro++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
```



#### 9-fizz_buzz.c

```sh
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints number from 1-100 mult of 3 Fizz 5 Buzz
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", fb);
		else if (i % 3 == 0)
			printf("%s ", f);
		else if (i % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
```



#### 10-print_triangle.c

```sh
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: Traingle of #
 */
void print_triangle(int size)
{
	int sp, ro, tr;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ro = 0; ro <= (size - 1); ro++)
		{
			for (sp = 0; sp < (size - 1) - ro; sp++)
			{
				_putchar(' ');
			}
			for (tr = 0; tr <= ro; tr++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
```


#### 100-prime_factor.c

```sh
#include <stdio.h>
#include <stdlib.h>

/**
 * main- Prints largest prime factor from no 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
	long prime = 612852475143, div;

	while (div < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (div = 3; div < (prime / 2); div += 2)
		{
			if ((prime % div) == 0)
				prime /= div;
		}
	}
	printf("%ld\n", prime);

	return (0);
}
```



#### 101-print_number.c

```sh
#include "main.h"

/**
 * print_number - Prints an integer
 * @n: integer to be printed
 *
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0 )
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
```














