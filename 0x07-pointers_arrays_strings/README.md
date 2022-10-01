`main.h Prototypes added`
# C More functions and nested loops

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://github.com/alxstudent-se/alx-system_engineering-devops.git)


#### 0-memset.c

```sh
#include "main.h"
/**
 *_memset -   fills memory with a constant byte
 *@s: pointer block of memory to fill
 *@b: value to set
 *@n: bytes of the memory
 *Return: dest
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	/*Delacring FOR*/
	for (i = 0; i < n; i++)
	{
		*(s + i) = b; /*add 1 position s*/

	} /*END FOR*/

	return (s);
}
```


1. Write a function that copies memory area.
	- Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
	- The `_memcpy()` function copies `n`  bytes from memory area `src` to memory area `dest`
	- Returns a pointer to `dest`
#### 1-memcpy.c

```sh
#include "main.h"
/**
 *_memcpy -   copy number bytes form adress "from" to adress "to"
 *@dest: content is to be copied
 *@src: Source of data to be copied
 *@n: bytes of the memory
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	i = 0;
	while (i < n)  /*Delacring WHILE*/
	{
		*(dest + i) = *(src + i); /*add 1 position dest and src*/
		i++;

	} /*END WHILE*/


	return (dest);
}

```


2. Write a function that locates a character in a string.
	- Prototype: `char *_strchr(char *s, char c);`
	- Returns a pointer to the first occurrence of the character `c`  in the string `s` , or `NULL` if the character is not found
#### 2-strchr.c

```sh
#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character to search
 * Return: Pointer to the first occurrence of the character c in the string s
 **/

char *_strchr(char *s, char c)
{

	while (*s != '\0') /*Declaring WHILE*/
	{
		if (*s == c) /*if s ==  c*/
		{
			return (s); /*return s*/
		}

		++s;
	}

	if (*s == c)
	{
		return (s);

	}


	return (0);/* values null*/
}
```


3. Write a function that gets the length of a prefix substring.
	- Prototype: `unsigned int _strspn(char *s, char *accept);`
	- Returns the number of bytes in the initial segment of `s` which consist only of bytes from `accept`
#### 3-strspn.c

```sh
#include "main.h"

/**
 * _strspn - Locates a character in a string
 * @s: This is the main C string to be scanned.
 * @accept: This is the string containing the list of characters to match in s
 * Return: return count
 **/

unsigned int _strspn(char *s, char *accept)

{
	int i, j;
	int count = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	i = 0;
	while (str1[i] != '\0') /*Declaring WHILE *s */
	{
		j = 0;
		while (str2[j] != '\0') /*Declaring WHILE *accept*/
		{
			if (str2[j] == str1[i]) /*Evaluate condition*/
			{
				count++; /*count number*/
				break;
			}

			j++;    /*add j+1*/
		}

		if (s[i] != accept[j]) /*If aren't equals*/
		{
			break;
		}

		i++; /*add x+1*/
	}

	return (count); /*return the value of count*/
}
```


4. Write a function that searches a string for any of a set of bytes.
	- Prototype: `char *_strpbrk(char *s, char *accept);`
	- The `_strpbrk()` function locates the first occurrence in the string `s` of any of the bytes in the string `accept`
	- Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found
#### 4-strpbrk.c

```sh
#include "main.h"

/**
 * _strpbrk - matches any character specified
 * @s: This is the C string to be scanned.
 * @accept:character in str1 that matches one of the characters in str2
 *Return: string s that matches any character specified in accept
 **/

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0') /*Declaring WHILE*/
	{
		j = 0;
		while (accept[j] != '\0')  /*Evaluating *accept*/
		{
			if (*s == accept[j])
			{
				return (s);
			}

			j++; /*add j+1*/
		}

		s++; /*add s+1*/
	}
	return (0);

}
```


5. Write a function that locates a substring.
 	- Prototype: `char *_strstr(char *haystack, char *needle);`
 	- The `_strstr()` function finds the first occurrence of the `substring needle` in the string `haystack`. The terminating null bytes (`\0`) are not compared
 	- Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found.
#### 5-strstr.c

```sh
#include "main.h"

/**
 * _strstr - first occurrence of the substring needle in the string haystack
 * @haystack: main str to be examined
 * @needle: searched in haystack
 * Return: return 0
 **/

char  *_strstr(char *haystack, char *needle)
{
	char *str1, *str2; /*Declaring variables*/

	while (*haystack != '\0')
	{
		str1 = haystack; /*values*/
		str2 = needle;

		/*Star WHILE*/
		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}
```

#### 7-print_chessboard.c

6. Write a function that prints the chessboard.
	- Prototype: `void print_chessboard(char (*a)[8]);`

```sh
#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	/*Declaring variables*/
	int i, j;

	i = 0;
	while (i < 8) /*number repetitions*/
	{
		j = 0;
		while (j < 8)
		{
			_putchar (a[i][j]);
			j++;
		}
		_putchar ('\n'); /*print new line*/
		i++; /*add +1*/
	}

}
```

#### 8-print_diagsums.c

7. Write a function that prints the sum of the two diagonals of a square matrix of integers.
	- Prototype: `void print_diagsums(int *a, int size);`
	- You are allowed to use the standard library

```sh
#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 * @a: 2d array of chars
 *@size: number matrix
*Return: void
 */

void print_diagsums(int *a, int size)
{
	/*Declaring variables*/
	int i;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	i = 0;
	while (i < size) /*number repetitions*/
	{
		/*sums for diagsums*/
		sum1 = sum1 + *(a + i * size + i);
		sum2 = sum2 + *(a + i * size + size - i - 1);

		i++; /*add +1*/
	}

	printf("%i, %i\n", sum1, sum2);

}
```


8. Write a function that sets the value of a pointer to a char.
	- Prototype: `void set_string(char **s, char *to);`

#### 
```sh
100-set_string.c
#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: content is to be copied
 *@to: string
 *Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
```


9. Create a file that contains the password for the crackme2 executable.
	- Your file should contain the exact password, no new line, no extra space
	- `ltrace`, `ldd`, `gdb` and `objdump` can help
	- You may need to install the `openssl` library to run the `crakme2` program: `sudo apt install libssl-dev`
	- Edit the source list `sudo nano /etc/apt/sources.list` to add the following line: `deb http://security.ubuntu.com/ubuntu xenial-security main` Then `sudo apt update` and `sudo apt install libssl1.0.0`
#### 101-crackme_password

```sh

abc123
```











