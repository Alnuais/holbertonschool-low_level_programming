#include <stdio.h>

/**
 * main - Prints decimal digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		printf("%d", number);
		number++;
	}
	printf("\n");

	return (0);
}
