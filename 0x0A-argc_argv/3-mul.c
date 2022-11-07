#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two numbers
 * @argc: number of command line arguments
 * @argv: name of array
 * @Return: 1 if not two arguments are passed, hence 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (i = i; i < 3; i++)
			j *= atoi(argv[i]);

		printf("%d\n", j);

	}

	return (0);
}

