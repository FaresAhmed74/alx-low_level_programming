#include "main.h"

/**
 * _islower - function to check lowercase.
 * @c: a The first integer number.
 * Return: interger 0 or 1 .
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
