#include <stdlib.h>
#include <string.h>
#include "main.h"

char *str_concat(char *s1, char *s2)
{
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    size_t len1 = strlen(s1);
    size_t len2 = strlen(s2);

    char *concatenated = malloc((len1 + len2 + 1) * sizeof(char));
    if (concatenated == NULL)
        return NULL;

    strcpy(concatenated, s1);
    strcat(concatenated, s2);

    return concatenated;
}