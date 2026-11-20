#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string in newly allocated memory
 * @str: string to duplicate
 *
 * Return: pointer to duplicate, or NULL on failure
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = str[i];

	return (copy);
}
