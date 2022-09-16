#include "main.h"

/**
 * more_numbers - print 0-14 10 times
 * Return: nothing
 **/

void more_numbers(void)
{
		for (i = 0; i <= 14; i++)
		{
			if (i <= 14)
				_putchar((i / 10) + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
}

