#include "variadic_functions.h"
#include "stdarg.h"
#include <stdio.h>

/**
 * print_numbers - A function that prints numbers, followed by a new line
 * @separator: The string to be printed between the numbers
 * @n: The number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);

	for (i = 0; i < (int)n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != (int)(n - 1))
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(ap);
	printf("\n");
}


