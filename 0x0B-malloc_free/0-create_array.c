#include <stdlib.h>
#include "main.h"

/**
 * create_array - A function that creates an array of chars, and initializes
 * it with a specific char.
 * @size: size of the array
 * @c: The parameter for the specific char
 * Return: Return a pointer of char
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(size);
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
		return (str);
	}

}
