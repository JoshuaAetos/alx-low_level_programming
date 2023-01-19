#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - The entry point
 * @argc: The argument counter
 * @argv: The argument vector
 * Return: Return int
 */
int main(int argc, char *argv[])
{
	int calc, num1, num2;
	char *operator;
	int (*func)(int, int);
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(operator);
	if ((func == NULL) || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	if (((func == ops[3].f) || (func == ops[4].f)) && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	calc = func(num1, num2);
	printf("%d\n", calc);


	return (0);


}
