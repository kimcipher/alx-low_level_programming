#include<stdlib.h>
#include"main.h"
#include<stddef.h>
#include<stdio.h>

/**
*array_range - a function that creates an array of integers
*@min: minimum number
*@max: maximum number
*Return: return the pointer to the newlycreated array and
*		NULL if malloc fails or NULL if min > max
*/

int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}

