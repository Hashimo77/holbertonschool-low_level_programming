#include <stdio.h>
#include "dog.h"

/**
 * print_dog - bir struct dog dəyişənini çap edir
 * @d: pointer struct dog dəyişəninə
 *
 * Əgər d NULL-dursa heç nə çap etmir.
 * Əgər name və ya owner NULL-dursa, (nil) çap edir.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
