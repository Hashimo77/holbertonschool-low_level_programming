#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - bir dog_t dəyişənini sərbəst buraxır
 * @d: sərbəst buraxılacaq dog_t pointeri
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
