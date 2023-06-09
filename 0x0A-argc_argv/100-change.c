#include <stdlib.h>
#include <stdio.h>
/**
*main - it prints the minimum num of coins to make the change
*		for an amount of money
*
*@argc: the number of arguments passed
*@argv: an array of pointers to the arguments
*Return: return 1 incase of an error else it returns 0
*/
int main(int argc, char *argv[])
{
	int cnt, cns;

	cns = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cnt = atoi(argv[1]);
	while (cnt > 0)
	{
		cns++;
		if ((cnt - 25) >= 0)
		{
			cnt -= 25;
			continue;
		}

		if ((cnt - 10) >= 0)
		{
			cnt -= 10;
			continue;
		}

		if ((cnt - 5) >= 0)
		{
			cnt -= 5;
			continue;
		}

		if ((cnt - 2) >= 0)
		{
			cnt -= 2;
			continue;
		}
		cnt--;
	}
	printf("%d\n", cns);
	return (0);
}
