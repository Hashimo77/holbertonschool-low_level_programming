#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - yeni bir dog_t dəyişəni yaradır
 * @name: itin adı
 * @age: itin yaşı
 * @owner: sahibinin adı
 *
 * Return: yeni yaradılmış dog_t pointeri, NULL əgər uğursuz olarsa
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy, *owner_copy;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	name_copy = strdup(name);
	owner_copy = strdup(owner);
	if (name_copy == NULL || owner_copy == NULL)
	{
		free(name_copy);
		free(owner_copy);
		free(d);
		return (NULL);
	}

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}
