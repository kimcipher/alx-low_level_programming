#include "main.h"

/*
 * Description - this is a version With Debug Option, this won't work
 *		with the checker copy go to the readme and click
 *		checker version that one will work with the checker.
*/

/**
 * debug_1 - print debug statements
 *
 * @n: value of n
 * @len: len of n
 * @mask: mask of n
 *
 * Return: nothing
*/
void debug_1(unsigned long int n, int len, unsigned long int mask)
{
	printf("len of %lu (n) is %i ", n, (len + 1));
	printf("and mask (original value 1) ");
	printf("is %lu based ", mask);
	printf("on [len of n - 1] == %i.\n\n", len);
}


/**
 * debug_2 - print debug statements
 *
 * @n: value of n
 * @mask: mask of n
 *
 * Return: nothing
*/
void debug_2(unsigned long int n, unsigned long int mask)
{
	printf("Value of n is %lu, ", n);
	printf("value of mask is %lu and ", mask);
	printf("value of [n & mask] is %lu.\n\n", (n & mask));
}

/**
 * debug_3 - print debug statements
 *
 * @mask: mask of value n
 *
 * Return: nothing
*/
void debug_3(unsigned long int mask)
{
	printf("\nValue of mask is %lu after right shifting by one.\n\n", mask);
}

/**
 * _len - find the len of @n
 *
 * @n: value to find its len
 *
 * Return: len
*/
int _len(unsigned long int n)
{
	int len = 0;

	while (n > 0)
	{
		#ifdef DEBUG
		printf("Value of n is %lu before right shifting by one.\n\n", n);
		#endif

		len++;
		n >>= 1; /*shift n to the right by 1*/

		#ifdef DEBUG
		printf("Value of n is %lu after right shifting by one.\n\n", n);
		#endif
	}

	len--;

	return (len);
}

/**
 * print_binary - a function that converts a decimal to binary
 *
 * @n: decimal number to convert
 *
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int len = 0;

	while ((n >> len) > 0)
		len++;

	len--;

	while (len >= 0)
	{
		if ((n >> len) & mask)
			_putchar('1');
		else
			_putchar('0');
		len--;
	}
}