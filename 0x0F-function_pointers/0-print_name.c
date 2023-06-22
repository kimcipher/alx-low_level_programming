#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - fuction to print name
 * @name: name
 * @f: fuction pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
