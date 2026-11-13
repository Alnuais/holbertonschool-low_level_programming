#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Memory area
 * @b: Byte to write
 * @n: Number of bytes
 *
 * Return: Pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
