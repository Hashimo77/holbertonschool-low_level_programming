#include "dog.h"

/**
 * init_dog - bir struct dog dəyişənini ilkinləşdirir
 * @d: pointer struct dog dəyişəninə
 * @name: itin adı
 * @age: itin yaşı
 * @owner: sahibinin adı
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

