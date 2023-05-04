#include "main.h"

/**
 * print_bin - prints binary rep of @n
 *
 * @number: decimal value
 *
 * Return: nothing
*/
void print_bin(unsigned long int number)
{
	if (number >> 1)
		print_bin(number >> 1);

	putc((number & 1) ? '1' : '0', stdout);
}

/**
 * flip_bits - a function that returns the number of bits you
 *             would need to flip to get from one number to
 *             another
 *
 * @n: decimal number
 * @m: the other decimal number
 *
 * Return: number of bits to flip to get @m from @n
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
  unsigned int count = 0;

  while (n != m) {
    if (n & 1) {
      m ^= 1;
      count++;
    }
    n >>= 1;
  }

  return count;
}

