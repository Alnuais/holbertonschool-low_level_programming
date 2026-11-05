#include <stdio.h>

/**
 * main - Prints hexadecimal digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;
	char letter = 'a';

	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
