#include<stdio.h>
#include"main.h"

/**
 * _isdigit - function tests for a decimal digit character
 * @c: contains digits
 * Return: 0 when false
 * 1 when true
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

