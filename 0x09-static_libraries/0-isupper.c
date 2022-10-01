#include "main.h"
#include <stdio.h>

/**
 * _isupper - int c
 * @c: this contains alphabets
 * Return: 1 when true.
 * 0 when false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

