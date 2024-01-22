#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - length of string
 *
 * @string: string
 *
 * Return: length of string
 */

int _strlen(const char *string)
{
	int l = 0;

	while (*string++)
		l++;
	return (l);
}

/**
 * _strcpy - copies string
 *
 * @cstring: sopied string
 * @dest: destination
 *
 * Return: destination
 */

char *_strcpy(char *dest, char *cstring)
{
	int a;

	for (a = 0; cstring[a]; a++)
		dest[a] = cstring[a];
	dest[a] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog
 *
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: struct dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
