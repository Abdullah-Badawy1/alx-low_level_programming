#include "main.h"
/**
 * swap_int  - Brief description of the function.
 * @a: a paramter for first value.
 * @b: a paramter for secod value.
 * Return: return the swap
 */
void swap_int(int *a, int *b)
{
	int swa = *a;
	*a = *b;
	*b = swa;
}