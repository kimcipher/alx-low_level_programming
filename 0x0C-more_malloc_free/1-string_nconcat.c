#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

/**
*string_nconcat - function to concatonate two strings, concats the second
*			string up to the nth element
*@s1: 1st string
*@s2: 2nd string
*@n: number of s2 elements to be added to s1
*Return: NULL or pointer to new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, str1_len, str2_len;


	str1_len = str2_len = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s2 + str2_len) != '\0')
		str2_len++;

	while (*(s1 + str1_len) != '\0')
		str1_len++;
	s = malloc(sizeof(char) * (str1_len + n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	if (n >= str2_len)
	{
		for (j = 0; j < n && s2[j] != '\0'; j++)
		{
			s[i] = s2[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			s[i] = s2[j];
			i++;
		}
	}
	s[i] = '\0';
	return (s);
}
