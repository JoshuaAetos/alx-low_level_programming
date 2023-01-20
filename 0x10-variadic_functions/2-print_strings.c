#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - A function that prints strings, followed by a new line
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;

	va_list(ap);
	va_start(ap, n);

	for (i = 0; i < (int)n; i++)
	{
		char *str = va_arg(ap, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (i != (int)(n - 1))
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
}
