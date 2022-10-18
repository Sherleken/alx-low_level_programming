#include "main.h"

/**
 * _islower - this checks if the character is lowercase
 * @c - this is the character
 * Return: 1 if the character is lowercase and 0 if it is not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
