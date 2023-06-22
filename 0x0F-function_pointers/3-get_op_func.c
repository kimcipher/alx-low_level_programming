#include "3-calc.h"

#include <stddef.h>
#include<stdio.h>
#include<stdlib.h>

/**
*get_op_func - its a fuction pointer of the type char array that recives two
*		inputs of the type integer
*
*@s: it is a pointer pointing to a character in the function argument
*Return: returns the operator functions to perform the calculations
*/


int (*get_op_func(char *s))(int, int)
{

	opt operators[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (operators[i].op)
	{
		if (*(operators[i].op) == *s)
			return (operators[i].f);
		i++;
	}

	return (NULL);
}
