#include "main.h"

/**
 * _isupper - check if letter is uppercase
 * @c: input
 * Return: 0
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
