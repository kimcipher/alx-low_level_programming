#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - function to print numbers
 * @separator: comma or space
 * @n: number elements of to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list ls;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ls, const unsigned int));

		if (separator && i != (n - 1))
			printf("%s", separator);
	}
	va_end(ls);
printf("\n");
}
