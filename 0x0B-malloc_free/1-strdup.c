#include <stdlib.h>
#include <stdio.h>
#include "main.h"
int _strlen(char *str);
/**
 * _strdup - A function that returns a pointer to a newly allocated space in
 * memory which contains a copy of the string given as a parameter
 * @str: String parameter
 * Return: Return a duplicated string
 */
char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(_strlen(str) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
	for (i = 0; i < _strlen(str); i++)
	{
		s[i] = str[i];
	}
	s[i] = str[i];
	}
	return (s);
	free(s);
}
/**
 * _strlen - A function that count the characters in as string
 * @str: String parameter
 * Return: Return string length
 */

int _strlen(char *str)
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
