#include <stdlib.h>
#include<stdio.h>
#include <ctype.h>
#include <string.h>

/**
*is_digit - check whether the character is a number
*@num: array of numbers to check
*Return: 0 if it is anumber and one if its not
*/
int is_digit(char num[])
{
	int x, y = strlen(num);

	for (x = 0; x < y; x++)
	{
		if (!isdigit(num[x]))
			return (1);
	}
	return (0);
}

/**
*main - program to add numbers
*@argc: number of arguments passed
*@argv: array of pointers to the argument passed
*Return: always 0 (success)
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int j;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{


	for (j = 1; j < argc; j++)
	{
		if (is_digit(argv[j]) == 0)
		{
		sum = sum + atoi(argv[j]);
		}
		else
		{
			printf("Error\n");
				return (1);
		}

	}
		printf("%d\n", sum);
	}
	return (0);
}
