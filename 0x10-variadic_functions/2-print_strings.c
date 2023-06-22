
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function to print strings
 * @separator: comma
 * @n: number of elements
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list ls;
	unsigned int i;
	char *str;

	if (separator == NULL)
		return;

	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ls, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
			printf("(nil)");

		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ls);
}
