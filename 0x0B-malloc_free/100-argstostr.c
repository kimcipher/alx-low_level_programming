#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, k, len;
	int total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the arguments */
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
			len++;
		total_len += len;
	}

	/* Allocate memory for the concatenated string */
	str = malloc((total_len + ac + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	/* Concatenate the arguments */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
		{
			str[k] = av[i][len];
			len++;
			k++;
		}
		str[k] = '\n';
		k++;
	}

	str[k] = '\0'; /* Add null terminator */

	return (str);
}
