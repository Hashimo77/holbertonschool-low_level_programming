#include <stdlib.h>
#include "dog.h"

/**
 * str_copy - creates a copy of a string
 * @str: string to copy
 *
 * Return: pointer to the new string or NULL if failure
 */
char *str_copy(char *str)
{
	char *copy;
	int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = str[i];

	return (copy);
}

/**
 * new_dog - creates a new dog and stores copies of name and owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog_t, or NULL if failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = str_copy(name);
	if (name != NULL && d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = str_copy(owner);
	if (owner != NULL && d->owner == NULL)
	{
		if (d->name != NULL)
			free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}

