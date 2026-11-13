#include "main.h"

/**
 * string_toupper - Converts lowercase letters to uppercase
 * @s: String to convert
 *
 * Return: Pointer to string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= ('a' - 'A');
		i++;
	}

	return (s);
}
