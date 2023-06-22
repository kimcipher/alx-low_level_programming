#include <stdlib.h>
#include <stdio.h>
#include<stddef.h>


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
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} opt;
int op_add(int x, int y)
{
	return (x + y);
}
/**
 * op_sub - subtract function
 * @x: input one
 * @y: input two
 * Return: 0
 */
int op_sub(int x, int y)
{
	return (x - y);
}
/**
 * op_mul - multiplication function
 * @x: input one
 * @y: input two
 * Return: 0
 */
int op_mul(int x, int y)
{
	return (x * y);
}
/**
 * op_div - division function
 * @x: input one
 * @y: input two
 * Return: 0
 */
int op_div(int x, int y)
{
	return (x / y);
}
/**
 * op_mod - modulous function
 * @x: input one
 * @y: input two
 * Return: 0
 */
int op_mod(int x, int y)
{
	return (x % y);
}

int (*get_op_func(char *s))(int, int)
{

	opt operators[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (operators[i].op)
	{
		if (*(operators[i].op) == *s)
			return (operators[i].f);
		i++;
	}

	return (NULL);
}

int main(int argc, char *argv[])
{
	int num1, num2, ans;
	int (*result)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error3\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	get_op = argv[2];


	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error2\n");
		exit(99);
	}

	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error1\n");
		exit(100);
	}

	result = get_op_func(get_op);
	ans = result(num1, num2);

	printf("%d\n", ans);
	return (0);
}
