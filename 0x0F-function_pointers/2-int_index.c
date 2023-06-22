#include<stdbool.h>
#include <stddef.h>
#include "function_pointers.h"



/**
 * int_index - a function that searches for an integer
 *
 * @array: array pointer
 * @size: size of @array
 * @cmp: pointer to function call that checsk if index in an array
 *       matches
 *
 * Return: Always 0 (Success)
*/


int int_index(int *array, int size, int (*cmp)(int))
{

	int index;
	bool bol;


	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (index = 0; index < size; index++)
		{
			bol = cmp(array[index]);
			if (bol == true)
				return (index);
		}
	}

	return (-1);

}
