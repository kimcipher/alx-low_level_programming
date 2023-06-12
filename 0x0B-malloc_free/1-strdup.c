#include "main.h"
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
    if (str == NULL)
        return NULL;

    size_t len = strlen(str);
    char *duplicate = malloc((len + 1) * sizeof(char));
    if (duplicate == NULL)
        return NULL;

    strcpy(duplicate, str);
    return duplicate;
}
