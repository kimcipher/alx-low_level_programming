

#include "3-calc.h"


/**
 * main - get_op_func has operators correlated with
 * func signs and funcs from op_func
 * if not 4 arguments, return Error & exit 98
 * if op is null, return Error & exit 99
 * if div or mod 0, return Error & exit 100
 * run calc, input one, operator, input two = pointer res to get_op
 * @argc: number of arguments
 * @argv:  pointer to an array of string of arguments
 * Return: 0
 */


int main(int argc, char *argv[])
{

	int num1, num2, ans;
	int (*result)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	get_op = argv[2];


	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(get_op);
	ans = result(num1, num2);

	printf("%d\n", ans);
	return (0);
}
