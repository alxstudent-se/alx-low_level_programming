# TASKS
0. Define a new type struct dog
```sh
#ifndef DOG_H
#define DOG_H
int _putchar (char c);
/**
 * struct dog - data structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: dog with name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

```
1. Write a function that initialize a variable of type struct dog
```sh
#include "dog.h"
#define NULL (void *)0

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: The dog to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

```
2. Write a function that prints a struct dog
```sh
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_dog - function
* @d: pointer to struct dog
*
* Description: function to print a struct dog
* Return: ptr to struct dog.
*/
void print_dog(struct dog *d)
{
	struct dog;

	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_dog - function
* @d: pointer to struct dog
*
* Description: function to print a struct dog
* Return: ptr to struct dog.
*/
void print_dog(struct dog *d)
{
	struct dog;

	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

```
3. Define a new type dog_t as a new name for the type struct dog.
```sh
#ifndef DOG_H
#define DOG_H
int _putchar (char c);
/**
 * struct dog - data structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: dog with name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

```
4. Write a function that creates a new dog.
```sh

#include "dog.h"

#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
* new_dog - function
* @name: name of dog
* @age: age of new doggo
* @owner: owner of new doggo
*
* Description: function to create a new dog. Store copy of name & owner
* Return: ptr, null if fail
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	char *nename, *neowner;
	int lename, leowner;

	dog_t *doggo = malloc(sizeof(dog_t));

	if (doggo == NULL)
		return (NULL);
	_strlen(name);
	lename = _strlen(name);
	nename = malloc((lename + 1) * sizeof(char));
	if (nename == NULL)
	{
		free(doggo);
		return (NULL);
	}
	_strcpy(nename, name);

	_strlen(owner);
	leowner = _strlen(owner);
	neowner = malloc((leowner + 1) * sizeof(char));
	if (neowner == NULL)
	{
		free(nename);
		free(doggo);
		return (NULL);
	}
	_strcpy(neowner, owner);

	doggo->name = nename;
	doggo->age = age;
	doggo->owner = neowner;

	return (doggo);
}

/**
* _strlen - function
* @s: first operand & pointer
*
* Description: function that returns the length of a string
* Return: Always 0
*/
int _strlen(char *s)
{
	int index = 0;

	while (*s != '\0')
	{
		index++;
		s++;
	}
	return (index);
}
/**
* _strcpy - function
* @src: copy from
* @dest: copy to
*
* Description: copies strng pnted by src to dest with null
* Return: char
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

```
5. Write a function that frees dogs.

```sh
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dog - function
* @d: pointer to dog
*
* Description: function to free dogs
* Return: 0 Success
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}


```