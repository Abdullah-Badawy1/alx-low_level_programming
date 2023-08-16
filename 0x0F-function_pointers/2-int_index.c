#include "function_pointers.h"

/**
* int_index - Searches for an integer in an array.
* @array: Array containing elements.
* @size: Number of elements in the array.
* @cmp: Function used to compare values.
*
* Return: Returns the index of the first corresponding element that matches
* the comparison function,
* or -1 if no element matches or when size is less than zero.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;
	if (array == NULL || cmp == NULL)
		return (-1);

	for ( ; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
