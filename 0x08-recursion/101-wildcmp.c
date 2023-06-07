#include "main.h"

/**
 * wildcmp - Compares two strings and checks if they are identical
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 1 if strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
    if (*s2 == '*')
    {
        if (*(s2 + 1) == '\0') /* * at the end of s2 */
            return (1);
        if (*(s2 + 1) == '*') /* Skip consecutive '*' characters */
            return (wildcmp(s1, s2 + 1));
        if (*s1 == '\0') /* s1 is empty, but s2 has more characters */
            return (wildcmp(s1, s2 + 1));
        if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1)) /* Match any string or skip '*' in s2 */
            return (1);
    }
    if (*s1 != '\0' && *s2 != '\0' && (*s1 == *s2 || *s2 == '?'))
        return (wildcmp(s1 + 1, s2 + 1));
    return (*s1 == '\0' && *s2 == '\0'); /* Check if both strings are at the end */
}
