#include "dog.h"

/**
 * init_dog - initialize dog info
 * @d: info
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
