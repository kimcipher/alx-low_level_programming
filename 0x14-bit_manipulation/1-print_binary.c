#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: number to be printed in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{

  int i;
  for (i = 63; i >= 0; i--) {
    putchar(((n >> i) & 1) + '0');
  }
  putchar('\n');

}
