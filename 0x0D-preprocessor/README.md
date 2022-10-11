# TASKS
0. Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.
```sh
#ifndef _OBJECT_LIKE_MACRO_
#define _OBJECT_LIKE_MACRO_

#define SIZE 1024

#endif
```

1. Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359
```sh
#ifndef _PI_
#define _PI_

#define PI 3.14159265359

#endif
```

2. Write a program that prints the name of the file it was compiled from, followed by a new line.
```sh
#include <stdio.h>
/**
 * main - prints the name of the file
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
```

3. Write a function-like macro ABS(x) that computes the absolute value of a number x.
```sh
#ifndef _FUNCTION_LIKE_MACRO_
#define _FUNCTION_LIKE_MACRO_

#define ABS(x) ((x) < (0) ? ((x) * (-1)) : (x))

#endif
```

4. Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y
```sh
#ifndef _SUM_LIKE_MACRO_
#define _SUM_LIKE_MACRO_

#define SUM(x, y) ((x) + (y))

#endif
```
