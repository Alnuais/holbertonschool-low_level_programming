#include "main.h"

/**
 * print_diagonal - Prints a diagonal line
 * @n: Number of diagonal characters
 */
void print_diagonal(int n)
{
	int row;
	int space;

	for (row = 0; row < n; row++)
	{
		for (space = 0; space < row; space++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
