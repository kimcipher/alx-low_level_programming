#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: a pointer to dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int length;
	char *ptr;

	if (name == 0 || owner == 0)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	for (length = 1, ptr = name; *ptr; length++)
		ptr++;
	d->name = malloc(length);
	if (d->name == 0)
	{
		free(d);
		return (NULL);
	}

	for (length = 1, ptr = owner; *ptr; length++)
		ptr++;
	d->owner = malloc(length);
	if (d->owner == 0)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (length = 0; *name != 0; length++, name++)
		d->name[length] = *name;
	d->name[length] = 0;
	for (length = 0; *owner != 0; length++)
		d->owner[length] = *owner++;
	d->owner[length] = 0;
	d->age = age;

	return (d);
}
