#include "main.h"

/**
 * _atoi - Converts the first number in a string to an integer
 * @s: String to convert
 *
 * Return: Converted integer, or zero if no digits
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = -sign;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				result = result * 10 + (s[i] - '0');
				i++;
			}
			break;
		}
		i++;
	}

	if (sign == -1)
		return (-result);

	return (result);
}
