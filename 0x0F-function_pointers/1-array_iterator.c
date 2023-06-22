#include <stddef.h>

/**
*array_iterator - a function that receives a function pointer and
*	uses it for iteration of an array
*
*@array: an array to iterate through
*@size: the size of the array
*@action: function pointer
*Return: returns nothing of any of the arguments is false
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned int i;


	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
