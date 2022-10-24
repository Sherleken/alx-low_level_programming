#include "main.h"

/**
 * print_diagonal - prints diagonal line on the terminal
 * @n: number of '\' to be printed
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < n; y++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
