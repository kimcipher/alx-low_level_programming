#include "main.h"


/**
 * create_memory - creates memory and allocates fill it wit a constant byte
 *
 * @s: pointer to newly created memory
 *
 * @c: chars to set into the memory
 * @n: number of bytes to be set
 *
 * Return: pointer to non-empty memory
*/

char *create_memory(char *s, char c, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

/**
 * _calloc - function that allocates memory
 *           for an array using create memory
 *
 * @arr_size: size of the array
 * @size: size of each item
 *
 * Return: pointer to new allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	create_memory(ptr, 0, nmemb * size);

	return (ptr);
}


/**
 * mul - initialize array with 0 byte
 *
 * @string1: str 1
 * @string2: str 2
 *
 * Return: nothing
*/

void mul(char *string1, char *string2)
{
	int i, length1, length2, total, f_digit, s_digit, result = 0, tmp;
	char *ptr;
	void *temp;

	length1 = length(string1);
	length2 = length(string2);
	tmp = length2;
	total = length1 + length2;
	ptr = _calloc(sizeof(int), total);

	temp = ptr;

	for (length1--; length1 >= 0; length1--)
	{
		f_digit = string1[length1] - '0';
		result = 0;
		length2 = tmp;
		for (length2--; length2 >= 0; length2--)
		{
			s_digit = string2[length2] - '0';
			result += ptr[length2 + length1 + 1] + (f_digit * s_digit);
			ptr[length1 + length2 + 1] = result % 10;
			result /= 10;
		}
		if (result)
			ptr[length1 + length2 + 1] = result % 10;
	}

	while (*ptr == 0)
	{
		ptr++;
		total--;
	}

	for (i = 0; i < total; i++)
		printf("%i", ptr[i]);
	printf("\n");
	free(temp);
}


/**
 * main - Entry point
 *
 * Description: a program that multiplies
 *            two positive numbers
 *
 * @argc: number of arguments
 * @argv: pointer to arguments array
 *
 * Return: 0 on success 98 on failure
*/

int main(int argc, char *argv[])
{
	char *num1 = argv[1];
	char *num2 = argv[2];

	if (argc != 3 || validate(num1) || validate(num2))
		exit_code();

	if (*num1 == '0' || *num2 == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
		mul(num1, num2);
	return (0);
}
