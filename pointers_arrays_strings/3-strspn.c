#include "main.h"

/**
 * _strspn - Gets length of initial accepted substring
 * @s: String to examine
 * @accept: Accepted characters
 *
 * Return: Length of matching prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}

		if (accept[j] == '\0')
			break;

		i++;
	}

	return (i);
}
