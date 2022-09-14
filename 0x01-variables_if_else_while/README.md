# Low Level Programming Basics

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://github.com/alxstudent-se/alx-system_engineering-devops.git)


#### 0
>
```sh
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point here
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
#### 1
>
```sh
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point here
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int o;
	char str[] = "Last digit of";

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
#### 2
>
```sh
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
(*
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

```
#### 3
>
```sh
#include <stdio.h>
/**
 * main - print chars.
(*
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);

}

```
#### 4
>
```sh
#include <stdio.h>
/**
 * main - Prints alphabet except the letters q and e.
(*
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}

```

#### 5
>
```sh
#include <stdio.h>
/**
 * main - Prints the numbers from 0-9
(*
 * Return: 0 on success
 */
int main(void)
{
	printf("0123456789\n");
	return (0);
}

```
#### 6
>
```sh
#include <stdio.h>
/**
 * main - print numbers 0-9 without using char or printf/puts,
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
#### 7
>
```sh
#include <stdio.h>
/**
 * main - prints the alphabet in reverse
(*
 * Return: 0 on success
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}

```
#### 8
>
```sh
#include <stdio.h>

/**
 * main - prints all numbers of base 16
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

#### 9
>
```sh
#include <stdio.h>
/**
 * main - print all possible combinations of single digit numbers.
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

#### 100
>
```sh
#include <stdio.h>
/**
 * main - prints numbers from 00 - 99
(*
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (!(i > j || i == j))
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = '0';
		i++;
	}
	return (0);
}

```

#### 101
>
```sh
#include <stdio.h>
/**
 * main - print numbers from 00 to 99
(*
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';
	int j = '0';
	int k = '0';

	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (!(i == '7' && j == '8' && k == '9'))
					{
						putchar(',');
						putchar(' ');
					}

				}
				k++;
			}
			k = '0';
			j++;
		}
		j = '0';
		i++;
	}
	putchar('\n');
	return (0);
}

```


#### 102
>
```sh
#include <stdio.h>
/**
 * main - Prints all possible combinations of a pair of
 * two digit numbers, without any repetition whatsoever
(*
 * Return: 0 on success.
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j && i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

```