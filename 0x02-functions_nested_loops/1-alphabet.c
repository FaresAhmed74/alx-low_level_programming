#include "main.h"


/**
 * print_alphabet - print all alphabet in lowercase
 * this function takes no parameters and returns no values.
 */
void print_alphabet(void)
{
	char letter;


	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
