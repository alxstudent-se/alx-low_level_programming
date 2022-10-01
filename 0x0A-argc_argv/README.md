# C Basics

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://github.com/alxstudent-se/alx-system_engineering-devops.git)


#### 
```sh
#!/bin/bash
gcc $CFILE -E -o c
```

#### 0-whatsmyname.c

0. Write a program that prints its name, followed by a new line.

```sh
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the name of the executable.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 *
 * Return: always 0.
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
```

#### 1-args.c

1. Write a program that prints the number of arguments passed into it.

```sh
#include <stdio.h>

/**
 * main -  print name
 *@argc: int.
 *@argv: char.
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

```

#### 2-args.c

2. Write a program that prints all arguments it receives.

```sh
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all arguments of the program separated by new line.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 *
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	int number = 0;

	while (number < argc)
	{
		printf("%s\n", *(argv + number));
		number++;
		(*argv)++;
	}
	return (0);
}

```

#### 3-mul.c

3. Write a program that multiplies two numbers.

```sh
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the multiplication of two arguments.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 *
 * Return: 1 if are less of 2 arguments otherwise 0.
 */
int main(int argc, char **argv)
{
	int multiplication;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multiplication = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%i\n", multiplication);
	}
	return (0);
}
```

#### 4-add.c

4. Write a program that adds positive numbers.

```sh
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - print the addition of two positive numbers.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 *
 * Return: 1 for less of 2 arguments or nondigit numbers, 0 success
 */
int main(int argc, char **argv)
{
	int sum, i, j;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
```

#### 100-change.c

5. Write a program that prints the minimum number of coins to make change for an amount of money.

```sh
#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns the min numbers of coins per given ammount of money.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 *
 * Return: 0 success 1 failure.
 */
int main(int argc, char **argv)
{
	int coins, i, ammount;
	int value[5] = {25, 10, 5, 2, 1};

	coins = 0;
	ammount = atoi(argv[argc - 1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (ammount <= 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (value[i] <= ammount)
			{
				coins = coins + (ammount / value[i]);
				ammount = ammount - (ammount / value[i]) * value[i];
				if (ammount == 0)
				{
					printf("%d\n", coins);
					break;
				}
			}
		}
	}
	return (0);
}
```














