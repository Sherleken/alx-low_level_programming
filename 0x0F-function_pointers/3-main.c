#include "3-calc.h"

/**
 * main - checks code
 * @argc: number of arguments
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	p = get_op_func(argv[2]);

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", p(a, b));
	return (0);
}
