#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14 ten times
 */
void more_numbers(void)
{
	int row;
	int n;

	for (row = 0; row < 10; row++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		_putchar('\n');
	}
}
