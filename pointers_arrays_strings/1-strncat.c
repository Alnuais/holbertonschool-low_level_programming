#include "main.h"

/**
 * _strncat - Concatenates at most n characters
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters
 *
 * Return: Pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';

	return (dest);
}
