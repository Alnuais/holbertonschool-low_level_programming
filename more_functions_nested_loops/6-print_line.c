#include "main.h"

/**
 * print_line - Prints a line using underscores
 * @n: Number of underscores
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
