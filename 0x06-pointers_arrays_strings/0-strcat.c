#include "main.h"
/**
 *_strcat - concatenate two strings
 *@dest: pointer to destination string
 *@src: pointer to source string
 *
 *Return: destination string
 */
char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
