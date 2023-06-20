#include <stdlib.h>
#include "dog.h"

/**
*init_dog - a function to initialize dog struct
*@d: dog struct pointer
*@name: name of the dog
*@age: age of the dog
*@owner: owner of the dog
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
