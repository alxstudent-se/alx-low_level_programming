``` main.h Prototypes added ```
# TASKS
# C More functions and nested loops

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://github.com/alxstudent-se/alx-system_engineering-devops.git)



#### 0-strcat.c

>Write a function that concatenates two strings.
*	Prototype: ```char *_strcat(char *dest, char *src);```
*	This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
*	Returns a pointer to the resulting string dest

```sh
#include "main.h"
/**
*_strcat - function that concatenates two strings.
*@dest: pointer to destination string.
*@src: pointer to source string.
*
*Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
int length, j;

length = 0;
while (dest[length] != '\0')
{
length++;
}
for (j = 0; src[j] != '\0'; j++, length++)
{
dest[length] = src[j];
}
dest[length] = '\0';
return (dest);
}

```
#### 1-strncat.c

>Write a function that concatenates two strings.
* Prototype: ```char *_strncat(char *dest, char *src, int n);```
* The _strncat function is similar to the _strcat function, except that
	- it will use at most n bytes from ```src;``` and
	- src does not need to be null-terminated if it contains n or more bytes
* Return a pointer to the resulting string dest
```sh
#include "main.h"
/**
 *_strncat - function that concatenates two strings. it will use
 * at most n bytes from src. src does not need to be null terminated.
 *@dest: pointer to destination string.
 *@src: pointer to source string.
 *@n: number of bytes to be concatenated.
 *
 *Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, j;
/* j is a counter for  n bytes of src to be concatenated */
/* length = length of destination string */

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}

```


2. Write a function that copies a string.
	- Prototype: ```char *_strncpy(char *dest, char *src, int n);```
	- Your function should work exactly like strncpy
#### 
```sh
#include "main.h"
/**
*_strncpy - a function that copies a string.
*at most n bytes of src are copied.
*if length of src is < n, additional null bytes are written to dest
*to ensure that a total of n bytes are written.
*@dest: pointer to destination string.
*@src: pointer to source string.
*@n: number of bytes to be used.
*
* Return: pointer to destination string.
*/
char *_strncpy(char *dest, char *src, int n)
{
int byteCount;

for (byteCount = 0; byteCount < n && src[byteCount] != '\0'; byteCount++)
dest[byteCount] = src[byteCount];
for (; byteCount < n; byteCount++)
dest[byteCount] = '\0';

return (dest);
}

```

#### 3-strcmp.c

3. Write a function that compares two strings.
	- Prototype: ```int _strcmp(char *s1, char *s2);```
	- Your function should work exactly like ```strcmp```

```sh
#include "main.h"
/**
 *_strcmp - compares two strings.
 *@s1: pointer to first string.
 *@s2: pointer to second string.
 *
 *Return: value less than 0 if string is less than the other.
 *value greater than 0 if string is greater than the other.
 *0 if strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
	int counter, cmpVal;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	cmpVal = s1[counter] - s2[counter];
	return (cmpVal);
}

```

#### 4-rev_array.c

4. Write a function that reverses the content of an array of integers.
	- Prototype: ```void reverse_array(int *a, int n);```
	- Where ```n```  is the number of elements of the array

```sh
#include "main.h"
/**
 *reverse_array - revereses an array.
 *@a: pointer to array.
 *@n: number of elements of an array.
 *
 *Return: void.
 */
void reverse_array(int *a, int n)
{
	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
```
#### 5-string_toupper.c

5. Write a function that changes all lowercase letters of a string to uppercase.
	- Prototype: ```char *string_toupper(char *);```

```sh
#include "main.h"
/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@x: pointer to string.
 *
 *Return: pointer to uppercase string.
 */
char *string_toupper(char *x)
{
	int length;

	length = 0;

	while (x[length] != '\0')
	{
		if (x[length] >= 97 && x[length] <= 122)
		{
			x[length] = x[length] - 32;
		}
		length++;
	}
	return (x);
}
```
#### 6-cap_string.c

6. Write a function that capitalizes all words of a string.
	- Prototype: ```char *cap_string(char *);```
	- Separators of words: space, tabulation, new line, ```,```, ```;```, ```.```, ```!```, ```?```, ```"```, ```(```, ```),``` ```{```, and ```}```

```sh
#include "main.h"
/**
 *cap_string - capitalizes every first letter of a word in a string.
 *separators of words are:  space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }.
 *@s: pointer to string.
 *
 *Return: pointer to s.
 */

char *cap_string(char *s)
{
	int count;

/*  scan through string */
	count = 0;
	while (s[count] != '\0')
	{/* if next character after count is a char , capitalise it */
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[count] == ' ' || s[count] == '\t' || s[count] == '\n'
		    || s[count] == ',' || s[count] == ';' || s[count] == '.'
		    || s[count] == '.' || s[count] == '!' || s[count] == '?'
		    || s[count] == '"' || s[count] == '(' || s[count] == ')'
		    || s[count] == '{' || s[count] == '}')
		{
			if (s[count + 1] >= 97 && s[count + 1] <= 122)
			{
				s[count + 1] = s[count + 1] - 32;
			}
		}
		count++;
	}
	return (s);
}

```

#### 7-leet.c

7. Write a function that encodes a string into ```1337```
	- Letters ```a```  and ```A```  should be replaced by ```4```
	- Letters ```e``` and ```E``` should be replaced by ```3```
	- Letters ```o``` and ```O``` should be replaced by ```0```
	- Letters ```t``` and ```T``` should be replaced by ```7```
	- Letters ```l``` and ```L``` should be replaced by ```1```
	- Prototype: ```char *leet(char *);```
	- You can only use one ```if```in your code
	- You can only use two loops in your code
	- You are not allowed to use ```switch```
	- You are not allowed to use any ternary operation

```sh
#include "main.h"
/**
 *leet - encodes a string into 1337.
 *letters a and A are replaced by 4.
 *Letters e and E are replaced by 3
 *Letters o and O are replaced by 0
 *Letters t and T are replaced by 7
 *Letters l and L are replaced by 1
 *@s: pointer to string.
 *
 *Return: pointer to s.
 */
char *leet(char *s)
{
	int stringCount, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

/*  scan through string */
	stringCount = 0;
	while (s[stringCount] != '\0')
/* check whether leetLetter is found */
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == s[stringCount])
			{
				s[stringCount] = leetNums[leetCount];
			}
			leetCount++;
		}
		stringCount++;
	}
	return (s);
}

```
#### 100-rot13.c

8. Write a function that encodes a string using rot13.
	- Prototype: ```char *rot13(char *);```
	- You can only use ```if``` statement once in your code
	- You can only use two loops in your code
	- You are not allowed to use ```switch```
	- You are not allowed to use any ternary operation

```sh
#include "main.h"
/**
 *rot13 - encodes strings using rot13.
 *@s: pointer to string.
 *
 *Return: pointer to encoded string.
 */
char *rot13(char *s)
{
	int stringCount, rotation;
	char r1[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		     'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		     'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		     'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		     'Z'};
	char r2[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		     'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
		     'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
		     'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
		     'M'};

	for (stringCount = 0; s[stringCount] != '\0'; stringCount++)
	{
		for (rotation = 0; rotation < 53; rotation++)
		{
			if (r1[rotation] == s[stringCount])
			{
				s[stringCount] = r2[rotation];
				break;
			}
		}
	}
	return (s);
}
```

#### 101-print_number.c

9. Write a function that prints an integer.
	- Prototype: ```void print_number(int n);```
	- You can only use ```if``` statement once in your code
	- You can only use two loops in your code
	- You are not allowed to use ```switch```
	- You are not allowed to use any ternary operation


```sh
#include "main.h"
/**
 *print_number - prints an integer.
 *only using the putchar function.
 *noarrays and pointers.
 *@n: integer to be printed.
 *
 *Return: void.
 */
void print_number(int n)
{
	unsigned int num;
/*check if number is negative*/
	num = n;
	if (n < 0)
	{
		_putchar(45);
		num = -n;
	}
/* print number by recursion*/
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}

```



#### 102-magic.c

10. Add one line to this code, so that the program prints ```a[2] = 98```, followed by a new line.
	- You are not allowed to use the variable ```a``` in your new line of code
	- You are not allowed to modify the variable ```p```
	- You can only write one statement
	- You are not allowed to use ```,```
	- You are not allowed to code anything else than the line of expected line of code at the expected line
	- Your code should be written at line 19, before the ```;```
	- Do not remove anything from the initial code (not even the comments)
	- and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)
	- You are allowed to use the standard library

```sh
#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *(p + 5) = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}

```
#### 103-infinite_add.c

11. Write a function that adds two numbers.
	- Prototype: ```char *infinite_add(char *n1, char *n2, char *r, int size_r);```
	- Where ```n1``` and ```n2``` are the two numbers
	- ```r``` is the buffer that the function will use to store the result
	- ```size_r``` is the buffer size
	- The function returns a pointer to the result
	- You can assume that you will always get positive numbers, or ```0```
	- You can assume that there will be only digits in the strings ```n1``` and ```n2```
	- ```n1``` and ```n2``` will never be empty
	- If the result can not be stored in ```r ```the function must return ```0```
!!! ```_putchar``` file added

```sh
#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer for result
 * @size_r: buffer size
 *
 * Return: address of r or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, l, m, n;
for (i = 0; n1[i]; i++)
;
for (j = 0; n2[j]; j++)
;
if (i > size_r || j > size_r)
return (0);
m = 0;
for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
{
n = m;
if (i >= 0)
n += n1[i] - '0';
if (j >= 0)
n += n2[j] - '0';
if (i < 0 && j < 0 && n == 0)
{
break;
}
m = n / 10;
r[k] = n % 10 + '0';
}
r[k] = '\0';
if (i >= 0 || j >= 0 || m)
return (0);
for (k -= 1, l = 0; l < k; k--, l++)
{
m = r[k];
r[k] = r[l];
r[l] = m;
}
return (r);
}

```

#### 

12. Write a function that prints a buffer.
	- Prototype: ```void print_buffer(char *b, int size);```
	- The function must print the content of ```size```bytes of the buffer pointed by ``` b```
	- The output should print 10 bytes per line
	- Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0
	- Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space
	- Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print .
	- Each line ends with a new line ```\n```
	- If ```size``` is 0 or less, the output should be a new line only ```\n```
	- You are allowed to use the standard library
	- The output should look like the following example, and formatted exactly the same way:

```sh
#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - determines if n is a printable ASCII char
 * @n: integer
 * Return: 1 if true, 0 if false
 */
int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * printHexes - print hex values for string b in formatted form
 * @b: string to print
 * @start: starting position
 * @end: ending position
 */
void printHexes(char *b, int start, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", *(b + start + i));
		else
			printf("  ");
		if (i % 2)
			printf(" ");
		i++;
	}
}

/**
 * printASCII - print ascii values for string b,
 * formatted to replace nonprintable chars with '.'
 * @b: string to print
 * @start: starting position
 * @end: ending position
 */
void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!isPrintableASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - prints a buffer
 * @b: string
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	} else
		printf("\n");
}

```

#### _putchar.c

```sh
/**
 * _putchar - writes the character c toto stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and  error is set
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
main.h
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
void print_number(int n);
int _putchar(char c);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);
```































