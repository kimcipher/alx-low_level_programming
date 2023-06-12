#include <stdlib.h>
#include <stdio.h>
#include "main.h"

char *argstostr(int ac, char **av)
{
    if (ac == 0 || av == NULL)
        return NULL;

    int total_length = 0;
    int i, j;
    char *str;

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            total_length++;
        total_length++; // for the newline character
    }

    str = malloc((total_length + 1) * sizeof(char));
    if (str == NULL)
        return NULL;

    int k = 0;
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            str[k] = av[i][j];
            k++;
        }
        str[k] = '\n';
        k++;
    }
    str[k] = '\0';

    return str;
}
