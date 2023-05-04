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

  if (n < 0 && m >= 0) {
    return -1;
  } else if (n >= 0 && m < 0) {
    return -1;
  }

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



