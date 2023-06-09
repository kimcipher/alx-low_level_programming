#include <stdlib.h>
#include <stdio.h>

/**
*main - a program that prints the number of arguments passed
*
*@argc: number of arguments
*@argv: an array of pointers to the arguments passed
*
*Return: always 0 (success)
*/
int main(int argc, char __attribute__((unused)) *argv[])
{

	int count = 0;
	int i;

	for (i = 0; i < argc; i++)
	{
		count++;
	}

	printf("%d\n", count - 1);

	return (0);

}
