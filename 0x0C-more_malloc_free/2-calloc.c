#include "main.h"
#include <stdlib.h>
#include<stddef.h>
#include <stdio.h>

/**
*_calloc - function to allocate memory for an array using malloc
*@nmemb: size of the array
*@size: size of the elememt
*Return: a pointer to the new allocated array or NULL if it fails
*/


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int j;


	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (j = 0; j < (nmemb * size); j++)
		arr[j] = 0;

	return (arr);
}
