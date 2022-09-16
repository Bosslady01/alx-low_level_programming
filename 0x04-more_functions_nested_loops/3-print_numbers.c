#include"main.h"

/**
 * print_numbers - this functions prints numbers 0-9
 * Returns: 0123456789
 */

void print_numbers(void)
{
	char i;

	for (i = 0; i <= 9; i++)
		_putchar(i);
	_putchar('\n');
}
