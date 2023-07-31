#include "main.h"
/**
 * set_string - Sets the value of a pointer to a char.
 *
 * Description: This function takes
 * :x a pointer to a pointer 's' and sets its value
 *              to the address pointed to by 'to'.
 *
 * @s: Pointer to the pointer whose value is to be set.
 * @to: Pointer to the new value to be set to 's'.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
