#include<stdlib.h>
#include<stdio.h>


/**
*main - program to multiply two numbers
*
*@argc: number of arguments
*@argv: array of pointers to the parameters
*
*Return: always 0 (success)
*/

int main(int argc, char *argv[])
{
	int prod = 1;
	int i = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			prod = prod * atoi(argv[i]);
		}
		printf("%d\n", prod);

	}
	return (0);
}

