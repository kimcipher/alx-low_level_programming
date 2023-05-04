#include "main.h"

/**
 * _atoi - converts chars to integer
 *
 * @c: char to convert
 *
 * Return: converted integer
*/
unsigned int _atoi(char c)
{
	return ((unsigned int) c - '0');
}

/**
 * _strlen - gets the length of a string
 *
 * @str: string input
 *
 * Return: string length
*/
unsigned int _strlen(const char *str)
{
	unsigned int index = 0;

	while (str[index] != '\0')
		index++;
	return (index);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned integer.
 *
 * @b: A string that contains only 0 and 1 characters.
 *
 * Returns: The converted unsigned integer, or 0 if the input string is null or contains any characters other than 0 and 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int base = 1;
	int i;

  if (b == NULL) {
    return 0;
  }

  for (i = strlen(b) - 1; i >= 0; i--) {
    if (b[i] != '0' && b[i] != '1') {
      return 0;
    }
    result = result * 2 + (b[i] - '0');
  }

  return result;
}

