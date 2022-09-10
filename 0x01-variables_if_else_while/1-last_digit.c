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
