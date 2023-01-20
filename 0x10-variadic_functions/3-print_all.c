#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
int _strlen(const char *str);
void print_separator(int i, int n);
/**
 * print_all - A function that prints anything
 * @format: A lsit of types of arguments passed to the function
 * Return; void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ap;
	int n;

	va_start(ap, format);
	n = _strlen(format);
	while (i < n)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				print_separator(i, n);
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				print_separator(i, n);
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				print_separator(i, n);
				break;
			case 's':
				printf("%s", va_arg(ap, char *));
				print_separator(i, n);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

/**
 * _strlen - A function that returns the length of a string
 * @str: String parameter
 * Return: Length of the string
 */
int _strlen(const char *str)
{
	int i = 0;
	int len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * print_separator - A function that prints a separator between the arguments
 * @i: Counter parameter
 * @n: Length of string
 * Return: void
 */

void print_separator(int i, int n)
{
	if (i != n - 1)
	{
		printf(", ");
	}
}
