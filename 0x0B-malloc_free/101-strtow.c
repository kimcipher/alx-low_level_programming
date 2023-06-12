#include <stdlib.h>

/**
 * wordcount - get word count from string
 *
 * @str: string to count words present
 *
 * Return: The number of words
 */
int wordcount(char *str)
{
    int ws = 0;

    while (*str != '\0')
    {
        /* skip spaces */
        if (*str == ' ')
            str++;
        else
        {
            while (*str != ' ' && *str != '\0')
                str++;
            ws++;
        }
    }
    return (ws);
}

/**
 * fr - free arr[i]
 *
 * @arr: array to free
 * @i: array[i]
 *
 * Return: nothing
 */
void fr(char **arr, int i)
{
    if (arr != NULL && i != 0)
    {
        while (i >= 0)
        {
            free(arr[i]);
            i--;
        }
        free(arr);
    }
}

/**
 * strtow - split a string to words
 *
 * @str: string to split.
 *
 * Return: NULL if it fails
 */
char **strtow(char *str)
{
    int i, s, j, str_len, word;
    char **string;

    if (str == NULL || *str == '\0')
        return (NULL);

    str_len = wordcount(str);

    string = malloc((str_len + 1) * sizeof(char *));
    if (str_len == 0 || string == NULL)
        return (NULL);

    for (i = s = 0; i < str_len; i++)
    {
        for (word = s; str[word] != '\0'; word++)
        {
            if (str[word] == ' ')
                s++;

            if (str[word] != ' ' && (str[word + 1] == ' ' || str[word + 1] == '\0'))
            {
                string[i] = malloc((word - s + 2) * sizeof(char));
                if (string[i] == NULL)
                {
                    fr(string, i);
                    return (NULL);
                }
                break;
            }
        }

        for (j = 0; s <= word; s++, j++)
            string[i][j] = str[s];
        string[i][j] = '\0';
    }
    string[i] = NULL;
    return (string);
}
