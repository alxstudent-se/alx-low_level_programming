# Low Level Programming Basics

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://github.com/alxstudent-se/alx-system_engineering-devops.git)

```sh
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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}
```

```sh
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
	int n;
	int o;
	char str [] = "Last digit of";
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	o = n % 10;

	if (o > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, o);
	else if (o == 0)
		printf("%s %d is %d and is 0\n", str, n, o);
	else if (o < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, o);

	
	return (0);
}
```

```sh
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
```

```sh
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main () {
   char ch;

   for(ch = 'a' ; ch <= 'z' ; ch++) {
      putchar(ch);
   }
    for(ch = 'A' ; ch <= 'Z' ; ch++) {
      putchar(ch);
   }
      for(ch = 'a' ; ch <= 'z' ; ch++) {
      putchar(ch);
   }
     
   return(0);
}
```

```sh
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main () {
   char ch;

   for(ch = 'a' ; ch <= 'e' ; ch++) {
      putchar(ch);
   }
   for(ch = 'f' ; ch <= 'z' ; ch++) {
	putchar(ch);
	}
   return(0);
}
```

```sh
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void main()
{

  int i; 

  for (i = 0; i <= 9; i++)
  {
    printf( i);
  }
}
```


```sh
#include <stdio.h>
/**
 * main - prints numbers 0-9 without using char or printf/puts,
 * and putchar 2x max
(*
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
```

```sh
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
```

```sh
#include <stdio.h>

/**
 * main - prints all numbers of base 16.
* Return: 0 on success
*/

int main(void)
{
	int i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	i = 'a';
	while (i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
```

```sh
#include <stdio.h>
/**
 * main - prints all possible combinations of single digit numbers.
(*
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);

}
```