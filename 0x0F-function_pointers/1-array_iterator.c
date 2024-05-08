#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Array to be targeted.
 * @size: Size of the array.
 * @action: Function to be executed on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
/***
 * => This is another solution <==
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	
	int i;
	for (i = 0; i < size; i++)
		action(array[i]);
}
