#include <stdio.h>
#include "math.h"

/**
 * main - finds and prints the largest prime factor of 612852475143
 * then a new line
 */
int main(void)
{
	int c;
	long num = 612852475143;

		for (c = (int) sqrt(num); c > 2; c++)
		{
			if (num % c == 0)
			{
				printf("%d\n", c);
			}
		}

	return (0);
}
