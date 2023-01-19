#include "variadic_functions.h"
#include "stdarg.h"

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: The size of the arguments supplied
 * Return: Sum of all its parameters
 */
int sum_them_all(const unsigned n, ...)
{
	int i;
	int sum = 0;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);

	for (i = 0; i < (int)n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}



