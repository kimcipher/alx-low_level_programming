#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);

/**
 * exit_code - prints error
 *              and exits with 98
 *
 * Return: Error 98 and exit(98)
*/

int exit_code(void)
{
	char *err;
	int i;

	err = "Error";
	for (i = 0; err[i] != '\0'; i++)
		_putchar(err[i]);
	_putchar('\n');
	exit(98);
}

/**
 * validate - checks if string contains only
 *                numbers
 *
 * @s: string to verify
 *
 * Return: 0 is true 1 if false
*/

int validate(char *s)
{
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
			return (1);
		s++;
	}
	return (0);
}
/**
 * length - obtain the len of the string
 *
 * @s: string to obtain len
 *
 * Return: length  the string
*/

int length(char *s)
{
	int j = 0;

	while (s[j] != '\0')
		j++;
	return (j);
}




#endif
