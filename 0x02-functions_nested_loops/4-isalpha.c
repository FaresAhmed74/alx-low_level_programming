#include "main.h"

/**
 * _isalpha - function that takes charachter to cheack character.
 * @c: parameter to check.
 * Return: 1 if upper or lower and 0 otherwise.
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
