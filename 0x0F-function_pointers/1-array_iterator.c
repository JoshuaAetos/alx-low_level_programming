#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - A function that execures a function give as a parameter on
 * each element of an array
 * @array: Array Parameter
 * @size: Size of the array
 * @action: Callback function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
