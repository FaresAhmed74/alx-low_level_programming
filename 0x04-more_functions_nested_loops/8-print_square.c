#include "main.h"

/**
 * print_square - print a square
 *
 * @size: size of square
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			_putchar('#');
			for (column = 2; column <= size; column++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

