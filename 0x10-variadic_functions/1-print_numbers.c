#include "variadic_functions"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - checks code
 * @separator: comma
 * @n: elements to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (n == i + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
