#include "main.h"
/**
*_isupper - function to ensure the upper and lower case
*@c: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
