#include "main.h"

/**
 * cap_string - Capitalizes words in a string
 * @s: String to capitalize
 *
 * Return: Pointer to string
 */
char *cap_string(char *s)
{
	int i = 0;
	int j;
	int capitalize = 1;
	char separators[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		if (capitalize && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= ('a' - 'A');

		capitalize = 0;
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (s[i] == separators[j])
			{
				capitalize = 1;
				break;
			}
		}
		i++;
	}

	return (s);
}
