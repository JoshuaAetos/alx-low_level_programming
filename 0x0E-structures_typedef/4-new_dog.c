#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
char *_strdup(char *str);
/**
 * new_dog - A function that creates a new dog
 * @name: Name member
 * @age: Age member
 * @owner: Owner member
 * Return: A new structure new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		return (NULL);
	}
	else
	{
		my_dog->name = _strdup(name);
		if (!my_dog->name)
		{
			free(my_dog);
			return (NULL);
		}
		my_dog->age = age;
		my_dog->owner = _strdup(owner);
		if (!my_dog->owner)
		{
			free(my_dog->name);
			free(my_dog);
			return (NULL);
		}
	}
	return (my_dog);
}
/**
 * *_strdup - function with one argument
 * @str: string argument
 *
 * Description: returns a pointer to allocated space in memory
 * Return: pointer
 */
char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}

	ptr = malloc(sizeof(char) * i + 1);

	if (ptr == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
	{
		ptr[j] = str[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
