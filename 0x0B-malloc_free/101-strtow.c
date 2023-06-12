#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

int count_words(char *str)
{
    int count = 0;
    int is_word = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            if (is_word == 0)
            {
                count++;
                is_word = 1;
            }
        }
        else
        {
            is_word = 0;
        }
    }

    return count;
}

char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;

    int word_count = count_words(str);
    if (word_count == 0)
        return NULL;

    char **words = malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    int i, j, k;
    int len;
    int is_word = 0;

    k = 0;
    len = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            if (is_word == 0)
            {
                is_word = 1;
                len = 0;
                for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
                    len++;
                words[k] = malloc((len + 1) * sizeof(char));
                if (words[k] == NULL)
                {
                    for (i = 0; i < k; i++)
                        free(words[i]);
                    free(words);
                    return NULL;
                }
                strncpy(words[k], &str[i], len);
                words[k][len] = '\0';
                k++;
            }
        }
        else
        {
            is_word = 0;
        }
    }

    words[k] = NULL;

    return words;
}
