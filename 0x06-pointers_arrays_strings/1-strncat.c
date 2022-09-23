#include "main.h"
/**
 *_strncat - concatenate two strings. It will use
 *at most n bytes from src.
 *@dest: pointer to destination
 *@src: pointer to source
 *@n: number of bytes to be concatenated
 *Return: destinstion string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, j;
/* j is a counter for n byte(s) of src to be concatenated */
/* length = length of destination string */

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
