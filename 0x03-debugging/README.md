# C Debugging

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://github.com/alxstudent-se/alx-system_engineering-devops.git)


####  0. Multiple mains 
>create a file named 0-main.c. This file must test that the function positive_or_negative() gives the correct output when given a case of 0.
*
    You only need to upload 0-main.c and main.h for this task.
*   You are not allowed to add or remove lines of code, you may change only one line in this task.


```sh
#include "main.h"
/**
 * main - Tests function that prints if integer is positive or negative
 *
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);

}

```

####   1. Like, comment, subscribe 
>Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.

```sh
#include <stdio.h>
#include "main.h"

/**
 * main - causes an infinite loop
 *
 * Return: 0
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	/*while (i < 10)*/
	/*{*/
	/*	putchar(i); */
	/*}*/

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}

```


####  2. 0 > 972? 

>Fix the code in 2-largest_number.c so that it correctly prints out the largest of three numbers, no matter the case.

*    Line count will not be checked for this task.

```sh
#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest of 3 integers
 * Return: 0
 */
int main(void)
{
	 int a, b, c;
	 int largest;

	 a = 972;
	 b = -98;
	 c = 0;

	  largest = largest_number(a, b, c);

	  printf("%d is the largest number\n", largest);

	  return (0);
}

```

####  3. Leap year 

> Fix the print_remaining_days() function so that the output works correctly for all dates and all leap years.

*    Line count will not be checked for this task.
*    You can assume that all test cases have valid months (i.e. the value of month will never be less than 1 or greater than 12) and valid days (i.e. the value of day will never be less than 1 or greater than 31).
*    You can assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).

```sh
#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    if ((year % 4 == 0 && !(year % 100 == 0)) || year % 400 == 0)
    {
        if (month > 2 && day >= 60)
        {
            day++;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        if (month == 2 && day == 60)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}
```