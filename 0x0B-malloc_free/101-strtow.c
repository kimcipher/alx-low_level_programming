#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str != ' ')
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		else
		{
			in_word = 0;
		}
		str++;
	}

	return count;
}

/**
 * free_words - Frees the allocated memory for the words array.
 * @words: The array of words.
 * @index: The current index.
 */
void free_words(char **words, int index)
{
	while (index >= 0)
	{
		free(words[index]);
		index--;
	}
	free(words);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words),
 *         or NULL if str == NULL or if memory allocation fails.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count;

	if (str == NULL || *str == '\0')
		return NULL;

	word_count = count_words(str);
	if (word_count == 0)
		return NULL;

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return NULL;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			len = 0;
			k = i;
			while (str[k] && str[k] != ' ')
			{
				len++;
				k++;
			}

			words[j] = malloc((len + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				free_words(words, j - 1);
				return NULL;
			}

			for (k = 0; k < len; k++, i++)
				words[j][k] = str[i];
			words[j][k] = '\0';
			j++;
		}
		else
		{
			i++;
		}
	}

	words[j] = NULL;

	return words;
}
