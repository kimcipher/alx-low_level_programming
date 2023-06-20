#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
*_realloc - changes old to new
*@ptr: pointer to a memory
*@old_size: size of old input
*@new_size : size of the new
*Return: NULL or 0
*/




void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *target, *source;
	unsigned int j;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	target = malloc(new_size);

	if (target == NULL)
		return (NULL);

	source = ptr;

	for (j = 0; j < new_size && j < old_size; j++)
		target[j] = source[j];

	free(ptr);


	return (target);
}
