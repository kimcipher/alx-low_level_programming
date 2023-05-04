/**
 * countSetBits - counts set bits in parameter n
 * @n: XOR value passed flip_bits arguments
 * Return: set Bits
 */
int countSetBits(int n)
{
	unsigned int count;

	count = 0;
	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}
/**
 * flip_bits - number of bits to flip
 * @n: from n
 * @m: to m
 * Return: bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}