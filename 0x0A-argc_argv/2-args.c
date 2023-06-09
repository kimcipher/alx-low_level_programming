#include<stdlib.h>
#include <stdio.h>

/**
*main - a program that prints all arguments
*
*@argc: number of arguments
*@argv: parameters
*
*Return: always return 0 (success)
*/


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
