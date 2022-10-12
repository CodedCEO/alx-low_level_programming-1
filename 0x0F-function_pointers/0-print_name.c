#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: inpute name
 * @heze: function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*heze)(char *))
{
	if (name && heze)
		heze(name);
}
