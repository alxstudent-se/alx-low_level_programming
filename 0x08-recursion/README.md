0x08. C - Recursion
# C More functions and nested loops

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://github.com/alxstudent-se/alx-system_engineering-devops.git)



# TASKS

0. Write a function that prints a string, followed by a new line.
  - Prototype: `void _puts_recursion(char *s);`


#### 0-puts_recursion.c

```sh
#include "main.h"
/**
 *_puts_recursion - prints a string
 *@s: pointer block of memory to fill
 *Return: void
 */

void _puts_recursion(char *s)

{
if (*s == '\0')
{
_putchar('\n');
return;
}

_putchar (*s);
_puts_recursion(s + 1);

}
```

#### 1-print_rev_recursion.c

1. Write a function that prints a string in reverse.
  - Prototype: `void _print_rev_recursion(char *s);`
```sh
#include "main.h"
/**
 *_print_rev_recursion - prints a string in reverse
 *@s: pointer block of memory to fill
 *Return: void
 */

void _print_rev_recursion(char *s)
{
if (*s) /*If statement*/
{
_print_rev_recursion(s + 1); /*add s*/
_putchar(*s); /*print s*/
}
}

```



#### 2-strlen_recursion.c

2. Write a function that returns the length of a string.
  - Prototype: `int _strlen_recursion(char *s);`


```sh
#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}


```



#### 3-factorial.c

3. Write a function that returns the factorial of a given number.
  - Prototype: `int factorial(int n);`
  - If `n` is lower than `0`, the function should return `-1` to indicate an error
  - Factorial of `0` is `1`


```sh
#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}


```




4. Write a function that returns the value of x raised to the power of y.
  - Prototype: `int _pow_recursion(int x, int y);`
  - If `y` is lower than `0`, the function should return `-1`




#### 4-pow_recursion.c
```sh

#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to raise
 * @y: power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
```


5. Write a function that returns the natural square root of a number.
  - Prototype: `int _sqrt_recursion(int n);`
  - If `n` does not have a natural square root, the function should return `-1`



#### 5-sqrt_recursion.c

```sh
#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}

```


6. Write a function that returns `1` if the input integer is a `prime number`, otherwise return `0`.
  - Prototype: `int is_prime_number(int n);`



#### 6-is_prime_number.c

```sh
#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

```


7. Write a function that returns 1 if a string is a palindrome and 0 if not.
  - Prototype: `int is_palindrome(char *s);`
  - An empty string is a palindrome



#### 100-is_palindrome.c

```sh
#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
```

```sh

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}

```


8. Write a function that compares two strings and returns `1` if the strings can be considered identical, otherwise return `0`.
  - Prototype: `int wildcmp(char *s1, char *s2);`
  - `s2` can contain the special character `*`.
  - The special char `*` can replace any string (including an empty string)


#### 101-wildcmp.c

```sh
#include "main.h"
#include <string.h>

/**
 * wildcmp - is a fuction that compares two strings.
 *
 * @s1: is a pointer to char.
 * @s2: is a pointer to char.
 *
 * Return: Returns the transformed pointer.
**/

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
if (*s2 == '*')
{
if (*(s2 + 1) == '*')
{
return (wildcmp(s1, s2 + 1));
}
else if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
{
return (1);
}
}
return (0);
}

```




#### main.h

```sh
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);

#endif

```















