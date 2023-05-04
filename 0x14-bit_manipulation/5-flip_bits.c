#include "main.h"

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

  // check that n and m are positive integers
  if (n <= 0 || m <= 0) {
	return 0; // Return an error or default value
  }

  // Check that n and m have the same number of bits
  if (sizeof(n)*8 != sizeof(m)*8) {
    return 0; // Return an error or default value
  }

  // Pad the smaller integer with zeros if necessary
  if (n < m) {
    n <<= sizeof(m)*8 - sizeof(n)*8;
  } else if (m < n) {
    m <<= sizeof(n)*8 - sizeof(m)*8;
  }


	// Count the number of bits that need to be flipped
  while (n != m) {
    if (n & 1) {
      m ^= 1;
      count++;
    }
    n >>= 1;
	m >>= 1;
  }

  return count;
}

