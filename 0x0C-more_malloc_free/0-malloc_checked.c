#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
*malloc_checked - function entry point
*@b: amount to be allocated
*Return: pointer to new memory
*/

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}

